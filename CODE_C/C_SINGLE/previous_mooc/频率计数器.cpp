#include <stdio.h>
int search(int want, int a[], int length);

int main() {
	int num, judge, sear, want;
	printf("请输入上界\n");
	scanf("%d", &num);
	int a[num], i;
	int x = 0;
	for (i = 0; i < num; i++) {
		a[i] = 0;
	}
	printf("请输入数字 输入-1为止\n");
	while (x != -1) {
		scanf("%d", &x);
		a[x]++;
	}
	printf("以下是[0,%d)内的统计结果\n", num );
	for (i -= 1; i > -1; i--) {
		printf("%d total %d\n", i, a[i]);
	}
	printf("是否需执行搜索？1/0\n");
	scanf("%d", &judge);
	if (judge == 0)
		goto out;
	else {
		printf("请输入要搜索的次数\n");
		scanf("%d", &want);
		sear = search(want, a, num);
		if (sear == -1)
			printf("not found");
		else
			printf("%d出现了%d次", sear, want);
		goto out;
	}
out:
	return 0;
}

int search(int want, int a[], int length) {
	int ret = -1, i = 0;
	for (i; i < length; i++) {
		if (want == a[i]) {
			ret = i;
			break;
		}
	}
	return ret;
}