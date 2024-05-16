#include<stdio.h>

int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	int k = 1;
	if(m <= n) {
		for(int i = 1; i <= m; i++) {
			int h = 0;
			for(int j = k; j >= 1; j--) {
				printf("%d", j);
				h++;
			}
			for(int j = 2; j < 2 + n - h ; j++) {
				printf("%d", j);
			}
			++k;
			printf("\n");
		}
	} 
	else {
		for(int i = 1; i <= n; i++) {
			int h = 0;
			for(int j = k; j >= 1; j--) {
				printf("%d", j);
				h++;
			}
			for(int j = 2; j < 2 + n - h ; j++) {
				printf("%d", j);
			}
			++k;
			printf("\n");
		}
		// luc nay k = 5 vi ktao k = 1
		for(int i = n; i < m; i++){
			for(int j = k; j > k - n; j--){
				printf("%d", j);
			}
		 	k++;
		 	printf("\n");
		}

	}
}