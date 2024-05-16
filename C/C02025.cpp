#include<stdio.h>

int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	int k = 1;
	if(m <= n) {
		for(int i = 1; i <= m; i++) {
			for(int j = k; j <= n; j++) {
				printf("%c", j + 63);
			}
			for(int j = k - 1; j >= 1; j--) {
				printf("%c", n + 63);
			}
			++k;
			printf("\n");
		}
	} 
	else {
		for(int i = 1; i <= n; i++) {
			for(int j = k; j <= n; j++) {
				printf("%c", j + 63);
			}
			for(int j = k - 1; j >= 1; j--) {
				printf("%c", n + 63);
			}
			++k;
			printf("\n");
		}
		for(int i = n; i < m; i++){
			for(int j = k - 1; j >= 1 ;j--){
				printf("%c", n + 63);
			}
			printf("\n");
		}
	}

}