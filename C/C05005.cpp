#include<stdio.h>
#include<math.h>

int main() {
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++) {
		int n, m;
		scanf("%d %d", &n, &m);
		int a[n][m];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", i);
		for(int i = 1; i < n; i++) {
			for(int j = 1; j < m; j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	printf("\n");
}