#include <stdio.h>
void judge(int a[], int len, int *max, int *min);

int main(void) {
	int a[] = {1, 4, 6, 9, 10, 15, 19, 20, 39, 50};
	int len = sizeof(a) / sizeof(a[0]);
	int max, min;
	judge(a, len, &max, &min);
	printf("max=%d,min=%d", max, min);
	return 0;
}

void judge(int a[], int len, int *max, int *min) {
	*max = *min = a[0];
	int i = 0;
	for (i; i < len; i++) {
		if (a[i] > *max)
			*max = a[i];
		if (a[i] < *min)
			*min = a[i];
	}
}
