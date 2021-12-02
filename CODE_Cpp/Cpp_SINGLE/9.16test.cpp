#include <iostream>
using namespace std;
int main()
{
    char a, b, c, m;
    cin >> a >> b >> c;
    m = a;
    if (b < m)
        m = b;
    if (c < m)
        m = c;
    cout << m;
    return 0;
}