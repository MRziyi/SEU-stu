#include <iostream>
using namespace std;
int main()
{
    int in = 0, k = 0, hun = 0, ten = 0, one = 0;
    cin >> in;
    k = (in / 1000 + 7) % 10;
    in %= 1000;
    hun = (in / 100 + 7) % 10;
    in %= 100;
    ten = (in / 10 + 7) % 10;
    in %= 10;
    one = (in + 7) % 10;
    cout << ten << one << k << hun;
    return 0;
}