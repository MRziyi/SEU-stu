#include <iostream>
using namespace std;
int main()
{
    int a = 0, cnt = 1, b = 0,spa=0;
    for (b = 0; b < cnt; b++)
    {
        if (cnt < 11)
        {
            for (a = 0; a < cnt; a++)
            {
                cout << '*';
            }
            cout << "\n";
            cnt++;
        }
    }
    cout << "\n";
    for (b = 0; b <= cnt; b++)
    {
        b = 0;
        for (a = 0; a < cnt - 1; a++)
        {
            cout << '*';
        }
        cout << "\n";
        cnt--;
    }
    cout << "\n";
    cnt = 10;
    for (b = 0; b <= cnt; b++)
    {

        b = 0;
        for(spa=0;spa>cnt-10;spa--){
            cout<<' ';
        }
        for (a = 0; a < cnt; a++)
        {
            
            cout << '*';
        }
        cout << "\n";
        cnt--;
    }
    cout<<"\n";
    a = 0, cnt = 1, b = 0,spa=0;
    for (b = 0; b < cnt; b++)
    {
        if (cnt < 11)
        {
            for(spa=0;spa<10-cnt;spa++){
            cout<<' ';
        }
            for (a = 0; a < cnt; a++)
            {
                cout << '*';
            }
            cout << "\n";
            cnt++;
        }
    }
    return 0;
}