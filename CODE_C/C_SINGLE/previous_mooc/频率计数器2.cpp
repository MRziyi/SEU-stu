#include <stdio.h>
int search(int want, int a[])

int main() {
	int num, judge, search, want;
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
	printf("是否需执行搜索？1/0");
	scanf("%d", &judge);
	if (judge = 0)
		goto out
		else {
			printf("请输入要搜索的数");
			scanf("%d", want);
			search = search(want, a[]);
			if (search = -1)
				printf("not found");
			else
				print("第%d位", i);
			goto out
		}
	out return 0;
}

int search(int want, int a[]) {
	int length = sizeof(a[]) / sizeof(a[0]), i = 0;
	ret = -1
	for (i; i < length; i++) {
		if (want = a[i]) {
			ret = i;
			break;
		}
	}
	return ret;
}