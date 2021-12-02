#include <stdio.h>
#include <string.h>
void judge(char a);
int i = 0;

int main(void) {
	int num = 0;
	scanf("%d", &num);
	char *a[num];
	for (i; i < num; i++) {
		scanf("%s", a[i]);
		//judge(a[i]);
	}

	return 0;
}

void judge(char a) {
	char *b = a[i], *c = "PAT";
	int cut = 0, cut2 = 0;
	for (cut; cut < strlen(a[i]); cut++) {
		if (a[i][cut] != 'P' && a[i][cut] != 'T' && a[i][cut] != 'A') {
			printf("NO\n");
			break;
		} else if {
		cut2 = strstr(b, c);
			cut2 = 'A';
			cut += 2;
			cut2 = 'A';
			for (cut, cut > -1, cut--) {
				if (a[i][cut] != 'A') {
					printf("NO\n");
					break;
				}
			}

		} else
			printf("YES")

		}
}
}