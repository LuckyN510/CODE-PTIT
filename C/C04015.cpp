#include <stdio.h>
#include <math.h>
int cnt[100001];
int main() {
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++) {
		int n;
		scanf("%d", &n);
		if(n > 1 && n < 100000) {
			int a[n];
			for(int i = 0; i < n; i++) {
				scanf("%d", &a[i]);
			}
			
			for(int i = 0; i < n; i++) {
				cnt[a[i]]++;
			}
			printf("Test %d:\n", i);
			for(int i = 0; i < n; i++) {
				if(cnt[a[i]] != 0) {
					printf("%d xuat hien %d lan\n", a[i],cnt[a[i]]);
					cnt[a[i]] = 0;
				}
			}
		}
	}
	return 0;
}