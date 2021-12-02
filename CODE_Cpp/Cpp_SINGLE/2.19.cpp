#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, min = 0, max = 0;
    cout << "Input three different integers : ";
    cin >> a >> b >> c;
    min = max = a;
    if (b > max)
    {
        max = b;
        if (c > max)
        {
            max = c;
        }
    }
    else if (c > max)
    {
        max = c;
    } //calculate max
    if (b < min)
    {
        min = b;
        if (c < min)
        {
            min = c;
        }
    }
    else if (c < min)
    {
        min = c;
    } //calculate min
    cout << "Sum is " << a + b + c << endl
         << "Average is " << (a + b + c) / 3.0 << endl
         << "Product is " << a * b * c << endl
         << "Smallest is " << min << endl
         << "Largest is " << max << endl;
    return 0;
}