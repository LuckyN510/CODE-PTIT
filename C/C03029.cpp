#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char c[10000];
		gets(c);
		char *token = strtok(c,"\n");
		int tmp = 1;// cho so do la so chan
		while(token != NULL) {
			for(int i = 0 ; i <= strlen(c) - 1; i++) {
				int digit = token[i] - '0';
				if(digit % 2 != 0) {
					tmp = 0;
					break;
				}
			}
			if(tmp == 0) {
				break;
			}
			token = strtok(NULL,"\n");
		}
		if(tmp == 1) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	printf("\n");
}