#include <iostream>
using namespace std;
int main()
{
    int i1 = 0, i2 = 0, size = 0;
    char fillCharacter;
    cout << "请输入尺寸 填充字符\n";
    cin >> size >> fillCharacter;
    for (; i1 < size; i1++)
    {
        for (i2 = 0; i2 < size; i2++)
        {
            cout << fillCharacter << ' ';
        }
        cout<<'\n';
    }
    return 0;
}