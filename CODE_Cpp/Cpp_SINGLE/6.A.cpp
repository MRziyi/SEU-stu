#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        int type = 0, size = 0, i1 = 0, i2 = 0, spa = 0;
        char fillchar,back='n';
        cout << "Choose the shape to graph\n1 for square\n2 for diamond\n3 for triangle\n? ";
        cin >> type;
        cout << "Enter a character and size : ";
        cin >> fillchar >> size;
        switch (type)
        {
        case 1:
            for (; i1 < size; i1++)
            {
                for (i2 = 0; i2 < size; i2++)
                {
                    cout << fillchar << ' ';
                }
                cout << '\n';
            }
            break;
        case 2:
            size = size / 2 + 1;
            for (i1 = 1; i1 < 2 * size + 1; i1++)
            {
                if (i1 < size + 1)
                {
                    for (spa = 0; spa < size - i1; spa++)
                        cout << ' ';
                    for (i2 = 0; i2 < 2 * i1 - 1; i2++)
                        cout << fillchar;
                    cout << '\n';
                }
                else
                {
                    for (spa = 0; spa < i1 - size; spa++)
                        cout << ' ';
                    for (i2 = 0; i2 < 4 * size - 1 - 2 * i1; i2++)
                        cout << fillchar;
                    cout << '\n';
                }
            }
            break;
        case 3:
            size++;
            for (i1 = 1; i1 < size; i1++)
            {
                for (spa = 0; spa < size - i1; spa++)
                    cout << ' ';
                for (i2 = 0; i2 < 2 * i1 - 1; i2++)
                    cout << fillchar;
                cout << '\n';
            }
            break;
        }
        cout << "Do you want to continue (y or n) ? : ";
        cin >> back;
        if(back!='y')
        break;
    }

    return 0;
}