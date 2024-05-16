#include<stdio.h>
	#include<math.h>
	#define ll long long
	void check(ll n){
		ll ans = 0;
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				ans = i;
				while( n % i == 0){
					n /= i;
				}
			}
		}
		if(n > 1){
			ans = n;
		}
		printf("%lld", ans);
	}
	int main() {
		int t;
		scanf("%d", &t);
		while(t--) {
			ll n;
			scanf("%lld", &n);
			check(n);
			printf("\n");
		}
	}