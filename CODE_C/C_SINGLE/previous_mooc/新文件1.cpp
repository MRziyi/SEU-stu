#include <stdio.h>
#include <string.h>

int main(void) {
	/*char a[] = "helloaaa", b[] = "world!";
	char *c = a, *d = b;
	while (*d != 'l') {
		*c = *d;
		c++;
		d++;
	}
	printf("%s %s", *c, *d);*/
	char a[] = "abcd";
	char *b = a;
	printf("a=%s b=%p\n", a, b);
	b += 2;
	*b = 'd';
	printf("a=%s *b=%p\n", a, b);
	return 0;
}
