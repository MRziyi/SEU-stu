#include <iostream>
using namespace std;
bool perfect(int a);
int main()
{
    int i = 1, test = 1, sum = 1;
    cout << "Please fill in the max : ";
    cin >> test;
    cout << "Perfect integers between 1 and " << test << endl;
    for (; i < test; i++)
    {
        if (perfect(i) == 1)
        {
            cout << i << " = 1";
            for (; sum < i;sum++)
            {
                if (i % sum == 0)
                    cout << " + " << sum;
            }
            cout<<"\n";
        }
    }
    return 0;
}
bool perfect(int a)
{
    int sum = 1, b = 0;
    bool judge = 0;
    for (; sum < a; sum++)
    {
        if (a % sum == 0)
            b += sum;
    }
    if (a == b)
        judge = 1;
    return judge;
}