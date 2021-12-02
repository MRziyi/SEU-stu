#include <iostream>
using namespace std;
int main()
{
    int a = 0, max = 0, min = 0, cnt = 1;
    cin >> a;
    max = min = a;
    for (cnt = 1; cnt < 5; cnt++)
    {
        cin >> a;
        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }
    cout << "max=" << max << endl
         << "min=" << min << endl;
    return 0;
}