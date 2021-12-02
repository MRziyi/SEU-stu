#include <iostream>
using namespace std;
int main()
{
	int input = 1, w = 1, x = 1, y = 1, z = 1;
	cin >> input;
	x = z = input;
	while (x > 9)
	{
		x /= 10;
		w *= 10;
	} //获得位数
	while (w > 0)
	{
		y = z / w; //获得单个数字
		cout << y;
		if (w != 1)
			cout << "   "; //添加空格 通过判断实现只有数之间有空格
		z = z % w;		   //抹去上一位
		w /= 10;		   //移到下一位
	}
	return 0;
}
