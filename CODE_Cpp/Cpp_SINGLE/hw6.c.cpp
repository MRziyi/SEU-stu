#include <iostream>
using namespace std;
int main()
{
    char a[100] = {'\0'};
    int p1 = 0, p2 = 0, p3 = 0, i = 0;
    cin >> p1 >> p2 >> p3;
    cin >> a;
    while (a[i] != '\0' && i < 100)
    {
        if (a[i] != '-')        //正常输出
        {
            cout << a[i];
        }
        else if (a[i + 1] > a[i - 1] && (('a' <= a[i - 1] && a[i + 1] <= 'z') || ('0' <= a[i - 1] && a[i + 1] <= '9')))     //满足展开条件判断
        {
            if (a[i + 1] == (char)(a[i - 1] + 1))   //是否直接相连判断
                goto next;
            if (p3 == 2) //reverse output
            {
                for (int i3 = (a[i + 1] - a[i - 1]) - 1; i3 > 0; i3--)
                {
                    if ((p1 == 1 || p1 == 2) && ('0' <= a[i - 1] && a[i + 1] <= '9')) //number
                        for (int i5 = 0; i5 < p2; i5++)                               //times
                            cout << (char)(a[i - 1] + i3);
                    else
                    {
                        if (p1 == 1) //small
                        {
                            for (int i5 = 0; i5 < p2; i5++) //times
                                cout << (char)(a[i - 1] + i3);
                        }
                        if (p1 == 2) //big
                        {
                            for (int i5 = 0; i5 < p2; i5++) //times
                                cout << (char)(a[i - 1] + i3 - 32);
                        }
                        if (p1 == 3) //star
                        {
                            for (int i5 = 0; i5 < p2; i5++) //times
                                cout << '*';
                        }
                    }
                }
            }
            else //common output
            {
                for (int i4 = 1; i4 < (a[i + 1] - a[i - 1]); i4++)
                {
                    if ((p1 == 1 || p1 == 2) && ('0' <= a[i - 1] && a[i + 1] <= '9')) //number
                        for (int i5 = 0; i5 < p2; i5++)
                            cout << (char)(a[i - 1] + i4);
                    else
                    {
                        if (p1 == 1) //small
                        {
                            for (int i5 = 0; i5 < p2; i5++) //times
                                cout << (char)(a[i - 1] + i4);
                        }
                        if (p1 == 2) //big
                        {
                            for (int i5 = 0; i5 < p2; i5++) //times
                                cout << (char)(a[i - 1] + i4 - 32);
                        }
                        if (p1 == 3) //star
                        {
                            for (int i5 = 0; i5 < p2; i5++) //times
                                cout << '*';
                        }
                    }
                }
            }
        }
        else
            cout << a[i];
    next:
        i++;
    }
    return 0;
}