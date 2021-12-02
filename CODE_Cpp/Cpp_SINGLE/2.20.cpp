#include <iostream>
using namespace std;
int main()
{
    const double pi = 3.14159;
    int r = 0;
    cout << "Please input the radius : ";
    cin >> r;
    cout << "The diameter is " << 2 * r << endl
         << "The circumference is " << 2 * pi * r << endl
         << "The area is " << pi * r * r << endl;
    return 0;
}