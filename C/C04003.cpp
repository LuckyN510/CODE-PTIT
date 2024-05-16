#include<stdio.h>
#include<math.h>
int check(int a[], int n) {
	for(int i = 0; i < n / 2; i++){
		int l = i, r = n - i - 1;
		if(a[l] != a[r])
		return 0;
	}
	return 1;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}

		if(check(a,n)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}

	}
	return 0;
}