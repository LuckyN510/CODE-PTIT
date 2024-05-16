#include<math.h>
#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n][m];
		int check[n][m];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				check[i][j] = 0;
			}
		}
		int cnt = 1;
		int c1 = 0, c2 = m - 1, h1 = 0, h2 = n - 1;
		while(c1 <= c2 && h1 <= h2) {
			for(int i = c1; i <= c2; i++) {
			    if(check[h1][i] == 0){
				    printf("%d ", a[h1][i]);
				    check[h1][i] = 1;
			    }
			}
			++h1;
			for(int i = h1; i <= h2; i++) {
			    if(check[i][c2] == 0){
				    printf("%d ", a[i][c2]);
				    check[i][c2] = 1;
			    }
			}
			--c2;

			for(int i = c2; i >= c1; i--){
			    if(check[h2][i] == 0){
    				printf("%d ", a[h2][i]);
    				check[h2][i] = 1;
			    }
			}
			--h2;

			for(int i = h2; i >= h1; i--){
			    if(check[i][c1] == 0){
    				printf("%d ", a[i][c1]);
    				check[i][c1] = 1;
			    }
			}
			++c1;
		}
		printf("\n");
	}
	printf("\n");
}