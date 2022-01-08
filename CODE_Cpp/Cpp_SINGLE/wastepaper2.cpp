#include <iostream>
using namespace std;
int main()
{
    int a[10][10] = {0}, i = 0, j = 0;
    cout << "number of clo ";
    cin >> i;
    cout << "numer of lin ";
    cin >> j;
    for (int lo1 = 0; lo1 < i; lo1++)
        for (int lo2 = 0; lo2 < j; lo2++)
            cin >> a[lo1][lo2];
    int cnt = 0, lo4 = 0;
    for (int lo3 = 0; lo3 < i; lo3++)
    {
        for (lo4 = 0,cnt=0; lo4 < j; lo4++)
            for (int lo5 = 0; lo5 < lo4; lo5++)
                if (a[lo3][lo5] > a[lo3][lo4])
                    cnt++;
        cout << "the cut of no."<<lo3<<" is "<<cnt<<endl;
    }
    return 0;
}