#include <iostream>
using namespace std;
int main()
{
    int a = 0, b[10] = {0}, i = 0,out=0;
    cin >> a;
    for (; a != 0; i++)
    {
        b[i] = a % 10;
        a /= 10;
    }
    bool flag = 1;
    while (flag)
    {
        flag = 0;
        for (int i2 = 0; i2 < i; i2++)
            if (b[i2] < b[i2 + 1])
            {
                swap(b[i2], b[i2 + 1]);
                flag = 1;
            }
    }
    int time=1;
    for(int i3=i-1;i3>=0;i3--){
        out+=b[i3]*time;
        time*=10;
    }
    cout<<out;
    return 0;
}