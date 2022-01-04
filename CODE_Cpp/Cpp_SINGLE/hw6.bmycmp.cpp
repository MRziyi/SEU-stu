#include <iostream>
using namespace std;
bool mystrncmp(char *a, char *b);
int main()
{
    char a[256] = {'\0'};     //用以储存读入的字符串
    char b[256][30] = {'\0'}; //二维数组用以存放单词
    int num[256] = {0};
    int i = 0, j = -1, k = 0;
    gets_s(a);
    for (; a[i] != '\0' && i < 257; i++)
    {
        while (a[i] == ' ') //处理空格问题
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
        for (; a[i] != ' ' && i < 257; i++) //排除空格之后存入单词组
            b[j][k++] = a[i];
        k = 0;
        num[j]++; //记录当前单词出现伪次数
        for (int cmp = 0; cmp < j; cmp++)
        {
            if (mystrncmp(b[j], b[cmp]) == 1) //检验当前单词之前是否存在
            {
                num[cmp]++;                              //若存在 记录该单词出现真次数
                for (int clean = 0; clean < 31; clean++) //清理重复的单词位
                    b[j][clean] = 0;
                num[j] = 0; //清理伪次数
                j--;
            }
        }
    }
out:
    int max = num[j], totalnum = j + 1, position = j;
    for (; j > 0; j--) //寻找频率最高的单词
    {
        if (max <= num[j - 1])
        {
            max = num[j - 1];
            position = j - 1; //记录出现位置
        }
    }
    cout << "total number of words is " << totalnum << "\nthe most frequent word is " << b[position] << "\nit appears " << max << " times";
    return 0;
}
bool mystrncmp(char *a, char *b){
    
    bool flag = 1;
    for (int i = 0; i < 50; i++)
    {
        if (*(a + i) != *(b + i))
            flag = 0;
    }
    return flag;
}
