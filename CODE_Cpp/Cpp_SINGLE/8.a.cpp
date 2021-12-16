#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[256] = {'\0'};       //用以储存读入的字符串
    char * b[256][2]={NULL};   //二维指针数组用于存放单词的始末地址
    int num[256] = {0};
    int i = 0, j = -1;
    gets(a);
    for (; a[i] != '\0' && i < 257; i++)
    {
        while (a[i] == ' ')     //处理空格问题
        {
            i++;
            if (a[i] != ' ')
            {
                if (a[i] == '\0')
                    goto out;
                break;
            }
        }
        j++;
        b[j][0]=&a[i];
        for (; a[i] != ' ' && i < 257; i++);
        b[j][1]=&a[i];
        num[j]++;                               //记录当前单词出现伪次数
        int everylet=0,flag=1;
        for (int cmp = 0; cmp < j; cmp++)
        {
            for(everylet=0,flag=1;everylet<((b[cmp][1]-b[cmp][0]));everylet++){
                if(*(b[j][0]+everylet)!=*(b[cmp][0]+everylet))
                    flag=0;
            }
            if ( flag == 1) //检验当前单词之前是否存在
            {
                num[cmp]++;                     //若存在 记录该单词出现真次数
                b[j][0]=b[j][1]={NULL};
                num[j] = 0;                     //清理伪次数
                j--;
            }
        }
    }
out:
    int max = num[j], totalnum = j + 1, position = j;
    for (; j > 0; j--)                      //寻找频率最高的单词
    {
        if (max <= num[j - 1])
        {
            max = num[j - 1];
            position = j - 1;           //记录出现位置
        }
    }
    cout << "total number of words is " << totalnum << "\nthe most frequent word is ";
    for(int everylet=0;everylet<((b[position][1]-b[position][0]));everylet++){
                cout<<*(b[position][0]+everylet);
            }
    cout<< "\nit appears " << max << " times";
    return 0;
}