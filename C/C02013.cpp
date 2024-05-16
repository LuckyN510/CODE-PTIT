#include<stdio.h>

int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	int h;
	if(m <= n) {
		int k = n;
		for(int i = 1; i <= m; i++) {
			int h = 0;
			for(int j = k; j >= 1; j--) {
				printf("%d", j);
				++h;
			}
			for(int j = 2; j < n - k + 2; j++) {
				printf("%d", j);
			}
			k--;
			printf("\n");
		}
	} 
	else {
		int k = m;
		for(int i = n; i < m; i++){
			for(int j = k; j > k - n; j--){
				printf("%d", j);
			}
			k--;
				printf("\n");
		}
		for(int i = 1; i <= n; i++) {
			h = 0;
			for(int j = k; j >= 1; j--) {
				printf("%d", j);
				++h;
			}
			for(int j = 2; j < n - k + 2; j++) {
				printf("%d", j);
			}
			k--;
			printf("\n");
		}
	}
}