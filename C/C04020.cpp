#include<stdio.h>
#include<math.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n > 1 && n < 100) {
		int a[n];
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int k;
		scanf("%d", &k);
		for(int i = k; i < n; i++ ) {
			printf("%d ", a[i]);
		}
		for(int i = 0; i <= k - 1; i++) {
			printf("%d ", a[i]);
		}
	}
}