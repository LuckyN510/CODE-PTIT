#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int dathuc[10001], cnt = 0;

void solve(char c[]) {
	for(int i = 0; i < strlen(c); i++) {
		if(isdigit(c[i])) {
			int tmp = 0;
			while(c[i] != '*') {
				tmp = tmp * 10 + c[i] - '0';
				i++;
			}
			i += 3;
			int mu = 0 ;
			while(isdigit(c[i])) {
				mu = mu * 10 + c[i] - '0';
				i++;
			}
			dathuc[mu] += tmp;
		}
	}
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	for(int i = 1; i <= t; i++) {
		char c1[10000], c2[10000];
		gets(c1);
		gets(c2);
		memset(dathuc, 0, sizeof(dathuc));
		cnt = 0;
		solve(c1), solve(c2);
		for(int i = 10000; i >= 0; i--) {
			if(dathuc[i]) {
				++cnt;
			}
		}
		for(int i = 10000; i >= 0; i--) {
			if(dathuc[i] != 0) {
				printf("%d*x^%d", dathuc[i], i);
				--cnt;
				if(cnt != 0) {
					printf(" + ");
				}
			}
		}
		printf("\n");
	}
}
