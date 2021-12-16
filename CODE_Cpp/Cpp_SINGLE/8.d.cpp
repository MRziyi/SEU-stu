#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void insert(int *, int);
int main()
{
    const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *face[13] = {"Ace", "King", "Queen", "Jack", "Ten", "Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two"};
    int num[52] = {0}, card = 0,k=0;
    srand(time(0));
    for (int i = 0; i < 52; i++)
    {
        do
            k = rand() % 53;
        while (num[k] != 0);
        num[k] = i;
    }
    for (int i = 0; i < 4; i++)
    {
        insert(num + 13 * i, 13);
    }
    while (card < 13)
    {
        for (int row = 0; row < 13; row++)
        {
            for (int col = 0,player=0; col < 4; col++)
            {
                cout << setw(5) << right << face[num[card+13*player] % 13] << " of " << setw(8) << left << suit[num[card+13*player] / 13];
                player++;
                cout<< (col == 3 ? '\n' : '\t');
            }
            card++;
        }
    }
    return 0;
}
void insert(int *a, int n)
{
    int i = n - 1;
    if (n == 0)
        return;
    insert(a, n - 1);
    while (i >= 1 && a[i] < a[i - 1])
    {
        swap(a[i], a[i - 1]);
        i--;
    }
}