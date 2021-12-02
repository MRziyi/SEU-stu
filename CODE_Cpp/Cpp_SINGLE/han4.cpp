#include <iostream>
using namespace std;
int main()
{
  int a[11] = {13, 16, 17, 18, 16, 14, 15, 12, 25, 21, 26}, i = 0, flag = 1;
  while (flag)
  {
    flag = 0;
    for (int i = 0; i < 10; ++i)
    {
      if (a[i] > a[i + 1])
      {
        flag = 1;
        swap(a[i], a[i + 1]);
      }
    }
  }
  for (i = 0; i < 11; i++)
  {
    cout << a[i] << ' ';
  }
  return 0;
}