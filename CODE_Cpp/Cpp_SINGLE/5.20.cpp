#include <iostream>
using namespace std;
int main()
{
    int side1 = 1, side2 = 1, hypotenuse = 1;
    for (; side1 < 501; side1++)
    {
        for (side2 = side1; side2 < 501; side2++)
        {
            for (hypotenuse = side2; hypotenuse < 501; hypotenuse++)
            {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse)
                    cout << side1 << " " << side2 << " " << hypotenuse << endl;
            }
        }
    }
    return 0;
}