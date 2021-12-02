#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	int num = 0, gue = 0, n = 1;
	num = rand() % 1001;
	cout << "I have a number between 1 and 1000." << endl
		 << "Can you guess my number?" << endl
		 << "Please type your first guess.\n";
	cin >> gue;
	while (num != gue)
	{
		if (num > gue)
			cout << "Too small. Try again\n";
		else
			cout << "Too big. Try again\n";

		n++;
		cin >> gue;
	}
	cout << "Excellent! You guessed the number!" << endl
		 << " You have guessed " << n << " times";
	return 0;
}