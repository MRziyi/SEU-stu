#include <stdio.h>


int main() {
	int num = 0, sum = 0, n = 0;
	scanf("%d", &num);
	while (num != -1) {
		sum += num;
		scanf("%d", &num);
		n++;
	}
	printf("%f", 1.0 * sum / n);

	return 0;
}
