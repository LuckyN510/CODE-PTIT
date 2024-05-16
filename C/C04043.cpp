#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
int comp(const void *a, const void *b) {
	ll *x = (ll*)a;
	ll *y = (ll*)b;
	if(*x < *y){
	    return -1;
	}
	else{
	    return 1;
	}
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		ll a[n];
		for(int i = 0; i < n; i++) {
			scanf("%lld", &a[i]);
			a[i] *= a[i];
		}
		qsort(a, n , sizeof(a[0]), comp);
		int find = 0;
		for(int i = n - 1; i >= 2; i--) {
			int l = 0, r = i - 1;
			while(l < r) {
				ll sum = a[l] + a[r];
				if(sum == a[i]) {
					printf("YES\n");
					find = 1;
					break;
				} else if( sum < a[i]) {
					++l;
				} else {
					--r;
				}
			}
		}
		if(!find)
		printf("NO\n");
	}
	return 0;
}