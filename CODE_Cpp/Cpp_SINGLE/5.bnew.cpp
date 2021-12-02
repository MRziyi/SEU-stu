#include <iostream>
using namespace std;
int main()
{
    int b[5] = {0};
    int a = 0;
    do
    {
        cin >> a;
        if (a >= 90)
            b[0]++;
        else if (a >= 80)
            b[1]++;
        else if (a >= 70)
            b[2]++;
        else if (a >= 60)
            b[3]++;
        else if (a >= 0)
            b[4]++;
        else
            break;

    } while (a != -1);
    cout << "A有" << b[0] << "个\n"
         << "B有" << b[1] << "个\n"
         << "C有" << b[2] << "个\n"
         << "D有" << b[3] << "个\n"
         << "F有" << b[4] << "个\n";
    return 0;
}