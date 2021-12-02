#include <stdio.h>
int su(int x) ;

int main() {
	int n = 2, i = 1, x = 2, y = 1;
	scanf("%d", &y);
	for (x = 2; x <= y; x++) {
		i = 1;
		i = su(x);
		if (i == 1)
			printf("%d  ", x);
	}

	return 0;
}

int su(int x) {
	int n = 2, i = 1;
	for (n = 2; n < x; n++) {
		if (x % n == 0) {
			i = 0;
			break;
		}

	}
	return i;
}
