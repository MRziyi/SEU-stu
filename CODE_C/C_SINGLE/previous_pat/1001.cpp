#include <stdio.h>

int main(void) {
	int n = 0, c = 0, x = 0;
	scanf("%d", &n);
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
			c++;
		} else {
			x = 3 * n + 1;
			x /= 2;
			n = x;
			c++;
		}
	}
	printf("%d", c);
	return 0;
}
