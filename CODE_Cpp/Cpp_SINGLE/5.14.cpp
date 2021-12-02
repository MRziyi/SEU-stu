#include <iostream>
using namespace std;
int main()
{
    int typ = 0, num = 0;
    double sum = 0;
    cout << "请输入产品编号 销售量，欲结束请输入-1 -1\n";
    do
    {
        cin >> typ >> num;
        switch (typ)
        {
        case 1:
            sum += num * 2.98;
            break;
        case 2:
            sum += num * 4.5;
            break;
        case 3:
            sum += num * 9.98;
            break;
        case 4:
            sum += num * 4.49;
            break;
        case 5:
            sum += num * 6.87;
            break;

        default:
            goto end;
            break;
        }
    } while (typ != -1);
end:
    cout << "一共" << sum << '$';
    return 0;
}