#include <stdio.h>
#include <string.h>

char *mycpy(char *a, const char *b) {
	char *c = a;
	while (*b ) {
		*a++ = *b++;
	}
	*a = '\0';
	return c;
}

int main(void) {
	char a[] = "helloaaa", b[] = "world!";
	printf("%s\n", mycpy(a, b));
	//printf("%s %s\n", a, b);
	return 0;
}
