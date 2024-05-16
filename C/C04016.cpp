#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int cnt[100001];
int nt(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return n > 1;
}
int comp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}
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
			qsort(a, n, sizeof(int), comp);
			for(int i = 0; i < n; i++) {
				if(nt(a[i])) {
					cnt[a[i]]++;
				}
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