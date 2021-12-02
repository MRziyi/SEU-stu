#include <iostream>
using namespace std;
int main()
{
    int in = 0, a[5] = {0}, i = 0, l = 10000;
    cin >> in;
    for (; i < 5; i++)
    {
        a[i] = in / l;
        in %= l;
        l /= 10;
    }
    if (a[0] == a[4] && a[1] == a[3])
        cout << "yes";
    else
        cout << "no";
    return 0;
}