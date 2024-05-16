#include<stdio.h>
#include<math.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
		int ticket = 0;
		for(int i = 0; i < 10; i++) {
			ticket += n / a[i];
			n %= a[i];
		}
		printf("%d\n", ticket);
	}
		printf("\n");
		return 0;
}