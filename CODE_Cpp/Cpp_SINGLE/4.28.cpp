#include <iostream>
using namespace std;
int main()
{
    int i = 1, a = 0;
    for (; i < 9; i++)
    {
        if (i % 2 != 0)
        {
            for (a=0; a < 8; a++)
            {
                cout << "*";
                cout << ' ';
            }
            cout << endl;
        }

        else
        {

            for (a=0; a < 8; a++)
            {
                cout << ' ';
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
