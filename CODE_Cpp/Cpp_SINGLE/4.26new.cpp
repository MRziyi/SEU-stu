#include <iostream>
using namespace std;
int main()
{
    char a[5] = {0};
    cin>>a;
    if (a[0] == a[4] && a[1] == a[3])
        cout << "好";
    else
        cout << "no";
    return 0;
}