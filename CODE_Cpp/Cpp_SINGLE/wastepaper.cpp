#include <iostream>
using namespace std;
void bbs(int *a, int n);
void is(int *a, int n);
int main()
{
    int a[] = {5, 8, 3, 8, 0, 9, 2, 5, 7, 5};
    is(a, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
void bbs(int *a, int n)
{
    bool flag = 1;
    while (flag)
    {
        flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                flag = 1;
                swap(a[i], a[i + 1]);
            }
        }
    }
}
void is(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int ith = i;
        for (int j = i+1; j < n; j++)
            if (a[ith] > a[j])
                ith = j;
        swap(a[i],a[ith]);
    }
}