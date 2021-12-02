#include <stdio.h>

int main() {
	int x = 1, z = 0;
	scanf("%d", &x);
	if (x == 0) {
		printf("0");
	} else {
		while (x > 0) {
			z = x % 10;
			x /= 10;
			printf("%d", z);
		}
	}
	return 0;
}
