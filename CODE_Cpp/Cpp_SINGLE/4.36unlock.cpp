#include <iostream>
using namespace std;
int unlock(int a);
int main()
{
    int in = 0, k = 0, hun = 0, ten = 0, one = 0;
    cin >> in;
    k = unlock(in / 1000);
    in %= 1000;
    hun = unlock(in / 100);
    in %= 100;
    ten = unlock(in / 10);
    in %= 10;
    one = unlock(in);
    cout << ten << one << k << hun;
    return 0;
}
int unlock(int a)
{
    a -= 7;
    if (a < 0)
        a += 10;
    return a;
}