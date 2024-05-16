#include<stdio.h>
#include<math.h>

int main() {
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++) {
		int n;
		scanf("%d", &n);
		int a[n][n];
		int cnt = n * n;
		int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
		while(c1 <= c2 && h1 <= h2) {
			for(int i = c1; i <= c2; i++) {
				a[h1][i] = cnt--;
			}
			++h1;
			for(int i = h1; i <= h2; i++) {
				a[i][c2] = cnt--;
			}
			--c2;
			for(int i = c2; i >= c1; i--) {
				a[h2][i] = cnt--;
			}
			--h2;
			for(int i = h2; i >= h1; i--) {
				a[i][c1] = cnt--;
			}
			++c1;
		}
		printf("Test %d:\n", i);
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {

				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	printf("\n");
}