#include <iostream>
using namespace std;
int *arrmax(int[][4], int);
void arrsort(int a[][4], int);
int main()
{
    int a[][4] = {1, 4, 2, 5, 6, 3, 4, 5, 1, 8, 3, 5};
    cout << *arrmax(a, 3)<<endl;
    arrsort(a, 3);
    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int i2 = 0; i2 < 4; i2++)
            cout << a[i1][i2];
        cout << "\n";
    }
    return 0;
}
int *arrmax(int a[][4], int num)
{
    int *p = a[0], *p2 = a[0], i = 0;
    for (; i < 4 * num; i++)
    {
        if (*p < *(p2 + i))
            p = p2 + i;
    }
    return p;
}
void arrsort(int a[][4], int num)
{
    for (int cur = 0; cur < num; cur++)
        for (int i1 = 0; i1 < 4; i1++)
        {
            int ith = i1;
            for (int i2 = i1 + 1; i2 < 4; i2++)
                if (a[cur][ith] < a[cur][i2])
                    ith = i2;
            swap(a[cur][ith], a[cur][i1]);
        }
}