#include <iostream>
using namespace std;
void move(int, int, int, int);
int main()
{
    int num = 1, from = 1, by = 1, to = 1;
    cout << "fill in the \"number\" \"from\" \"by\" \"to\" : ";
    cin >> num >> from >> by >> to;
    move(num, from, by, to);
    return 0;
}
void move(int n, int f, int b, int t)
{
    if (n == 1)
        cout << f << "->" << t << endl;
    else
    {
        move(n - 1, f, t, b);
        cout << f << "->" << t << endl;
        move(n - 1, b, f, t);
    }
}