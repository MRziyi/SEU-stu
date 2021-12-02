#include <iostream>
using namespace std;
int gcd(int, int);
void gcd0(int, int, int &);
void gcd0pointer(int, int, int *);
int gcd2(int, int);
int gcd3(int, int);
int main()
{
    while (1)
    {
        int a = 0, b = 0, max = 1;
        int *c = &max;
        cout << "Enter two integers: ";
        cin >> a >> b;
        //gcd0(a,b,max);
        gcd0pointer(a, b, c);
        cout << "The greatest common divisor of " << a << " and " << b << " is " << gcd(a, b) << endl;
    }
    return 0;
}
int gcd(int a, int b)
{
    int max = 1, tryit = 1;
    for (; tryit <= min(a, b); tryit++)
    {
        if (a % tryit == 0 && b % tryit == 0)
            max = tryit;
    }
    return max;
}
void gcd0(int a, int b, int &max)
{
    int tryit = 1;
    for (; tryit <= min(a, b); tryit++)
    {
        if (a % tryit == 0 && b % tryit == 0)
            max = tryit;
    }
}
void gcd0pointer(int a, int b, int *max)
{
    int tryit = 1;
    for (; tryit <= min(a, b); tryit++)
    {
        if (a % tryit == 0 && b % tryit == 0)
            *max = tryit;
    }
}
int gcd2(int a, int b)
{
    int mod = min(a, b), premod = min(a, b);
    while (1)
    {
        mod = max(a, b) % premod;
        if (mod == 0)
            return premod;
        else
            premod = mod;
    }
}
int gcd3(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return gcd3(b, a % b);
}