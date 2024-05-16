#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int check(char c[]) {
	for(int i = 0; i < strlen(c); i++) {
		if(c[i] != c[strlen(c) - i - 1] || (c[i] - '0') % 2 != 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char c[500];
		gets(c);
		if(check(c)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}