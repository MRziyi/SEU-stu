#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    const char *article[5] = {"the", "a", "one", "some", "any"},
               *noun[5] = {"boy", "girl", "dog", "town", "car"},
               *verbs[5] = {"drove", "jumped", "ran", "walked", "skipped"},
               *perpositions[5] = {"to", "from", "over", "under", "on"};
    srand(time(0));
    for (int i = 0; i < 20; i++)
    {
        int first = rand() % 5;
        printf("%c%s %s %s %s %s %s\n", (char)(*article[first] - 32), article[first] + 1, noun[rand() % 5], verbs[rand() % 5], perpositions[rand() % 5], article[rand() % 5], noun[rand() % 5]);
    }
    return 0;
}