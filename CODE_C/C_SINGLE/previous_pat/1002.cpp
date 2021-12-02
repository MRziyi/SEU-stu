#include <stdio.h>
#include <string.h>
void output (int x);

int main(void) {
	char a[101] = {0};
	int i = 0, t = 0, musk = 1;
	scanf("%s", &a);
	if (a[0] == '0')
		printf("ling");
	else {

		for (i; i < strlen(a); i++) {
			t += a[i] - '0';
		}

		int t1 = t, t2 = t;
		while (t > 9) {
			t /= 10;
			musk *= 10;
		}
		while (t2 != 0) {
			t1 = t2 / musk;
			t2 %= musk;
			musk /= 10;
			output(t1);
			if (t2 > 0)
				printf(" ");
		}
	}
	return 0;
}

void output (int x) {
	switch (x) {
		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;
		default:
			printf("null");
	}
}