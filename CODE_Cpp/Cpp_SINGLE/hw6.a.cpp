#include <iostream>
using namespace std;
void select1(int[], int);
void select2(int *, int);
void insert1(int *, int);
void insert2(int *, int);
void out(int[], int);
int main()
{
    int a[10] = {3, 6, 0, 13, 24, 12, 3, 5, 8, 1};
    select1(a, 10);
    out(a, 10);
    int b[10] = {3, 6, 0, 13, 24, 12, 3, 5, 8, 1};
    select2(b, 10);
    out(b, 10);
    int c[10] = {3, 6, 0, 13, 24, 12, 3, 5, 8, 1};
    insert1(c, 10);
    out(c, 10);
    int d[10] = {3, 6, 0, 13, 24, 12, 3, 5, 8, 1};
    insert2(d, 10);
    out(d, 10);
    return 0;
}
void select1(int *a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        int ith = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[ith])
            {
                ith = j;
            }
        }
        swap(a[i], a[ith]);
    }
}
void select2(int *a, int n)
{
    if (n < 3)
    {
        if (a[0] > a[1])
            swap(a[0], a[1]);
    }
    else
    {
        int min = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < a[min])
                min = i;
        }
        swap(a[min], a[0]);
        a++;
        select2(a, n - 1);
    }
}
void insert1(int *a, int n)
{
    if (a[0] > a[1])
        swap(a[0], a[1]);
    a--;
    for (int i = 2; i <= n; ++i)
    {
        int key = a[i];
        int j = i - 1;
        while (j > 0 && a[j] > key)
        {
            swap(a[j + 1], a[j]);
            --j;
        }
        a[j + 1] = key;
    }
}
void insert2(int *a, int n)
{
    int i = n - 1;
    if(n==0) return;
    insert2(a,n-1);
    while (i >= 1 && a[i] < a[i - 1])
    {
        swap(a[i], a[i - 1]);
        i--;
    }
}

void out(int a[], int arraysize)
{
    int i = 0;
    for (; i < arraysize; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}