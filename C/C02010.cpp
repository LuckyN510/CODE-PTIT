#include<stdio.h>
#include<math.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	if(n <= m) {
		for(int i = 0; i < n; i++) {
			for(int j = i; j < m; j++) {
				printf("%d", j + 1);
			}
			for(int j = i - 1; j >= 0; j--) {
				printf("%d", j + 1);

			}
			printf("\n");
		}

	}
	if(n > m) {
		for(int i = 0; i < m; i++) {
			for(int j = i; j < m; j++) {
				printf("%d",j + 1);
			}
			for(int j = i - 1; j >= 0; j--) {
				printf("%d",j + 1);
			}
		
			printf("\n");
		}
		for(int i = m; i < n; i++) {
			printf("%d",i + 1);
			for(int j = m - 1; j > 0; j--) {
				printf("%d",j);
			}
			printf("\n");
		}
	}

}