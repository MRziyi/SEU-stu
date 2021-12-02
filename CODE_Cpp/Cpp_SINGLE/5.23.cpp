#include <iostream>
using namespace std;
int main()
{
    int i = 1, spa = 0, sta = 0;
    for (; i < 11; i++)
    {
        if (i < 6)
        {
            for (spa = 0; spa < 5 - i; spa++)
                cout << ' ';
            for (sta = 0; sta < 2 * i - 1; sta++)
                cout << '*';
            cout << '\n';
        }
        else
        {
            for (spa = 0; spa < i - 5; spa++)
                cout << ' ';
            for (sta = 0; sta < 19 - 2 * i; sta++)
                cout << '*';
            cout << '\n';
        }
    }
    return 0;
}