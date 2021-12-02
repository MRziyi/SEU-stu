#include <iostream>
using namespace std;
double fibonacci(double);
int main()
{
    double n = 0;
    cin >> n;
    printf("fibonacci(%.0lf)=%.1lf", n, fibonacci(n));
    return 0;
}
double fibonacci(double n)
{
    double inst = 0, pr = 1, prpr = 0, i = 0;
    if (n < 2)
        return n;
    for (; i < n - 1; i++)
    {
        inst = pr + prpr;
        prpr = pr;
        pr = inst;
    }
    return inst;
}