#include <stdio.h>
int search(int want, int a[], int length);

int main() {
	int num, judge, sear, want;
	printf("�������Ͻ�\n");
	scanf("%d", &num);
	int a[num], i;
	int x = 0;
	for (i = 0; i < num; i++) {
		a[i] = 0;
	}
	printf("���������� ����-1Ϊֹ\n");
	while (x != -1) {
		scanf("%d", &x);
		a[x]++;
	}
	printf("������[0,%d)�ڵ�ͳ�ƽ��\n", num );
	for (i -= 1; i > -1; i--) {
		printf("%d total %d\n", i, a[i]);
	}
	printf("�Ƿ���ִ��������1/0\n");
	scanf("%d", &judge);
	if (judge == 0)
		goto out;
	else {
		printf("������Ҫ�����Ĵ���\n");
		scanf("%d", &want);
		sear = search(want, a, num);
		if (sear == -1)
			printf("not found");
		else
			printf("%d������%d��", sear, want);
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