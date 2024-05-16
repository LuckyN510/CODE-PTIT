#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {

		char c[200];
		gets(c);
		int n = 0;
		char a[1000][100];
		char *token = strtok(c, " ");
		while(token != NULL) {
			strcpy(a[n], token);
			++n;
			token = strtok(NULL, " ");
		}
		int cnt = 0;
		for(int i = 0; i < n; i++) {
			++cnt;
		}
		printf("%d\n", cnt);
	}
}
