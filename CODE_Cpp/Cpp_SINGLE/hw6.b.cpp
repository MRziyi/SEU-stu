#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[256] = {'\0'};
    char b[256][30] = {'\0'};
    int num[256] = {0};
    int i = 0, j = -1, k = 0;
    gets(a);
    for (; a[i] != '\0' && i < 257; i++)
    {
        while (a[i] == ' ')
        {
            i++;
            if (a[i] != ' ')
            {
                if (a[i] == '\0')
                    goto out;
                break;
            }
        }
        j++;
        for (; a[i] != ' ' && i < 257; i++)
            b[j][k++] = a[i];
        k = 0;
        num[j]++;
        for (int cmp = 0; cmp < j; cmp++)
        {
            if (strncmp(b[j], b[cmp], 30) == 0)
            {
                num[cmp]++;
                for (int clean = 0; clean < 31; clean++)
                    b[j][clean] = 0;
                num[j] = 0;
                j--;
            }
        }
    }
out:
    int max = num[j], totalnum = j + 1, position = j;
    for (; j > 0; j--)
    {
        if (max <= num[j - 1])
        {
            max = num[j - 1];
            position = j - 1;
        }
    }
    cout << "total number of words is " << totalnum << "\nthe most frequent word is " << b[position] << "\nit appares " << max << " times";
    return 0;
}