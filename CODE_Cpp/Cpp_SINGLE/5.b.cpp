#include <iostream>
using namespace std;
int main()
{
    int b[5] = {0};
    int in = 0;
    while (cin>>in,in != -1)
    {
        switch (in /= 10)
        {
        case 10:
            b[0]++;
            break;
        case 9:
            b[0]++;
            break;
        case 8:
            b[1]++;
            break;
        case 7:
            b[2]++;
            break;
        case 6:
            b[3]++;
            break;
        default:
            b[4]++;
            break;
        }
    };
    cout
        << "A有" << b[0] << "个\n"
        << "B有" << b[1] << "个\n"
        << "C有" << b[2] << "个\n"
        << "D有" << b[3] << "个\n"
        << "F有" << b[4] << "个\n";
    return 0;
}