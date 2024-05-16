#include<stdio.h>
#include<math.h>
int nt(int n) {
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++) {
		int n;
		scanf("%d", &n);
		int a[1000][100], b[100], x = 0;
		int cnt = 0;
		int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
		for (int i = 2; i <= 1000000; i++)
			if (nt(i))
				b[x++] = i;
		while(c1 <= c2 && h1 <= h2) {
			for(int i = c1; i <= c2; i++) {
				a[h1][i] = b[cnt++];
			}
			++h1;
			for(int i = h1; i <= h2; i++) {
				a[i][c2] = b[cnt++];
			}
			--c2;
			for(int i = c2; i >= c1; i--) {
				a[h2][i] = b[cnt++];
			}
			--h2;
			for(int i = h2; i >= h1; i--) {
				a[i][c1] = b[cnt++];
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
}