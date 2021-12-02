#include <iostream>
using namespace std;
int main()
{
    double a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    if (a + b > c && a - b < c)
        cout << "能构成三角形";
    else
        cout << "不能构成三角形";
    return 0;
}