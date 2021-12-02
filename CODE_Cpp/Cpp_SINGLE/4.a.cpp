#include <iostream>
using namespace std;
int main()
{
    int m = 0, n = 0;
    cin >> m >> n;
    cout << m - (n - 2 * m) / 2 << "只鸡，" << (n - 2 * m) / 2 << "只兔子。";
    return 0;
}