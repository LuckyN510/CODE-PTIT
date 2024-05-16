#include<stdio.h>
#include<math.h>
#include<string.h>

void cut(char c[]) {
	for(int i = 0; i <= strlen(c) - 1; i++) {
		if(c[i] == '0' || c[i] == '1' || c[i] == '8' || c[i] == '9') {
			if(c[i] == '8' || c[i] == '9') {
				c[i] = '0';
			}
		} else {
			printf("INVALID\n");
			return ;
		}
	}
	int res = 0;
	while(res < strlen(c) && c[res] == '0') {
		++res;
	}
	if(res == strlen(c)) {
		printf("INVALID\n");
	} else {
		for(int i = res; i <= strlen(c) - 1; i++) {
			printf("%c", c[i]);
		}
		printf("\n");
	}
}
int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char c[10000];
		gets(c);
		cut(c);
	}
	return 0;
}