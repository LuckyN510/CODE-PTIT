#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int check(char c[]) {
	for(int i = 0; i <= strlen(c) - 1; i++) {
		if(c[i] < c[i - 1]) {
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
		char c[10000];
		gets(c);
		if(check(c)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	printf("\n");
	return 0;
}