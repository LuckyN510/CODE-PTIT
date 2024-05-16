#include<stdio.h>

int main() {
	int m, n;
	scanf("%d%d",&m, &n);
	int h;
	int k = n;
	if(m <= n) {

		for(int i = 1; i <= m; i++) {
			h = 0;
			for(int j = n ; j > k - 1; j--) {
				printf("%c", j + 96);
				++h;
			}
			for(int j = h; j <= n - 1 ; j++) {
				printf("%c", k + 96);
			}
			--k;
			printf("\n");
		}
	} 
	else {
		k = m;	
		for(int i = 1; i <= n; i++) {
			h = 0;
			for(int j = m ; j > k - 1; j--) {
				printf("%c", j + 96);
				++h;
			}
			for(int j = h; j <= n - 1 ; j++) {
				printf("%c", k + 96);
			}
			--k;
			printf("\n");
		}
		for(int i = n; i < m; i++) {
			for(int j = m; j > m - n; j--) {
				printf("%c", j + 96);
			}
			printf("\n");
		}
	}
}