#include <stdio.h>

int main(void) {
	int a[] = {12, 45, 89, 25, 47, 69, 90, 'n'};
	int *b, i = 0;
	b = a;
	while (*b != 'n') {
		printf("%d ", *b),
		       *b++;
	}
	return 0;
}
