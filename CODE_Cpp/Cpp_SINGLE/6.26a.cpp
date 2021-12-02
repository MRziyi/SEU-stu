#include <iostream>
using namespace std;
int FtoC(int );
int main()
{
    int lnum = 32;
    cout << "Celsius equivalents of Fahrenheit temperatures\n"
         << "Fahrenheit\tCelsius\t"
         << "Fahrenheit\tCelsius\t"
         << "Fahrenheit\tCelsius\t"
         << "Fahrenheit\tCelsius\n";

    for (; lnum < 77; ++lnum)
    {
        cout << lnum << '\t' << '\t'<< FtoC(lnum)  << '\t' << lnum + 45 << '\t' << '\t'<< FtoC(lnum + 45) << '\t' << lnum + 90 << '\t' << '\t'<< FtoC(lnum + 90) << '\t' << lnum + 135 << '\t' << '\t'<< FtoC(lnum + 135) << endl;
    }
    return 0;
}
int FtoC(int f)
{
    int c=0;
    c = (f - 32) * 5 / 9;
    return c;
}