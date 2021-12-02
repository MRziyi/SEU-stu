#include <stdio.h>
#include <string.h>

int mycmp(const char *a, const char *b) {
	int i = 0;
	for (i; a[i] == b[i]; i++) {
		if (a[i] == b[i] && a[i] == '\0') {
			break;
		}
	}
	return a[i] - b[i];
}

int main(void) {
	char a[] = "abc", b[] = "Abc";
	printf("%d %d", strcmp(a, b), mycmp(a, b));

	return 0;
}