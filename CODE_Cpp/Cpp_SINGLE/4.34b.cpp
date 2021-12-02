#include <iostream>
#include <iomanip>
using namespace std;
int factorial(int a);
int main()
{
    int a = 0;
    double e = 1;
    cout << "please input the accuracy : ";
    cin >> a;
    a -= 1;
    while (a >= 1)
    {
        e += (1.0 / factorial(a));
        a--;
    }
    cout << "e=" << setprecision(15) << e;
    return 0;
}
int factorial(int a)
{
    int out = 1;
    if (a != 0)
    {
        while (a >= 1)
        {
            out *= a;
            a--;
        }
    }
    else
        out = 1;
    return out;
}