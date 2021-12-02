#include <iostream>
using namespace std;
int main()
{
    int c = 1000, a = 0, b = 0;
    for (; c < 10000; c++)
    {
        a = c / 100;
        b = c % 100;
        if ((a + b) * (a + b) == c)
            cout << c << endl;
    }
    return 0;
}