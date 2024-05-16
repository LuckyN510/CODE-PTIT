#include<stdio.h>

int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	int h = 0;
	if(m <= n) {
		int k = m;
		for(int i = 1; i <= m; i++) {
			h = 0;
			for(int j = k ; j <= n; j++ ) {
				printf("%c", j + 64);
				++h;
			}
			for(int j = h; j < n; j++ ) {
				printf("%c", n + 64);
			}
			--k;
			printf("\n");
		}
	} else {
		int k = n;
		for(int i = 1; i <= m - n; i++) {
			for(int j = k - 1; j >= k - n; j--) {
				printf("%c", n + 64);
			}
			printf("\n");
		}
		for(int i = 1; i <= n; i++) {
			h = 0;
			for(int j = k ; j <= n; j++ ) {
				printf("%c", j + 64);
				++h;
			}
			for(int j = h; j < n; j++ ) {
				printf("%c", n + 64);
			}
			--k;
			printf("\n");
		}

	}
}