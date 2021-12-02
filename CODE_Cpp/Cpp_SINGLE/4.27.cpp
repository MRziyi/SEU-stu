#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int a = 0, sum = 0, i = 0;
    cin >> a;
    while (a != 0)
    {
        sum += a % 10 * pow(2, i);
        a /= 10;
        i++;
    }
    cout << sum;
    return 0;
}