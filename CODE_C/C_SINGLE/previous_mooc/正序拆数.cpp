#include <stdio.h>

int main() {
	int input = 1, w = 1, x = 1, y = 1, z = 1;
	scanf("%d", &input);
	x = input;
	z = input;
	while (x > 10) {
		x /= 10;
		w *= 10;
	}
	while (w > 0) {
		y = z / w;
		printf("%d", y);
		if (w != 1)
			printf(" ");
		z = z % w;
		w /= 10;
	}
	return 0;
}
