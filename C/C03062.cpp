#include<stdio.h>
#include<math.h>
#include<inttypes.h>
#define ll long long

ll gcd(ll a, ll b) {
	while(b != 0) {
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}
ll lcm(ll a, ll b) {
	return 1ll * a / gcd(a, b) * b;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		ll  n, m;
		scanf("%lld%lld", &n,&m);
		ll res = 1;
		for(ll i = n; i <= m ; i++) {
			res = lcm(res, i);
		}
		printf("%lld\n",res );
	}
}