#include <iostream>
using namespace std;
void out(void);
int main()
{
    int i = 1;
    for (; i < 9; i++)
    {
        if (i % 2 != 0)
            out();
        else
        {
            cout << ' ';
            out();
        }
    }
    return 0;
}
void out(void)
{
    int i = 0;
    for (; i < 8; i++)
    {
        cout << "*";
        cout << ' ';
    }
    cout << endl;
}
