#include <stdio.h>
#include <string.h>

int mystrlen(const char *a) {
	int i = 0;
	for (i; a[i] != '\0'; i++) {

	}
	return i;
}

int main(void) {
	char a[] = "hello world";
	printf("%d %d", strlen(a), mystrlen(a));

	return 0;
}
