#include <iostream>
using namespace std;
int prime(int);
int main()
{
    int i = 2, num = 0, cnt = 0;
    cout << "The prime munbers from 1 to 10000 are: \n";
    for (; i < 10001; i++)
    {
        if (prime(i) == 1)
        {
            num++;
            cnt++;
            cout << '\t' << i;
            if (num == 9)
            {
                cout << '\n';
                num = 0;
            }
        }
    }
    cout << "\nTotal of " << cnt << " prime numbers between 1 and 10000";
    return 0;
}
int prime(int a)
{
    int i = 2, flag = 0;
    for (; i <= a; i++)
    {
        if (a == i)
            flag = 1;
        if (a % i == 0)
            break;
    }
    return flag;
}