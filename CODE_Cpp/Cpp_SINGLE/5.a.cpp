#include <iostream>
using namespace std;
int main()
{
    int y = 0, m = 0, d = 0, week = 0;
    cin >> y >> m >> d;
    if (m <= 2)
    {
        m += 12;
        y -= 1;
    }
    week = (d + 1 + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    if (week == 0)
        cout << 7;
    else
        cout << week;
    return 0;
}