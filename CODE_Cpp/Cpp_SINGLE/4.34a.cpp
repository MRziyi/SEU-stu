#include <iostream>
using namespace std;
int main()
{
    int a = 0, out = 1;
    cin >> a;
    if (a != 0)
    {
        while (a >= 1)
        {
            out *= a;
            a--;
        }
        cout << out;
    }
    else
        cout << 1;
    return 0;
}