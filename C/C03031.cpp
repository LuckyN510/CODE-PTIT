#include<stdio.h>
#include<math.h>
#define ll long long
int gcd(ll a, ll b) {
	while(b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {

		ll a, b, c, d;
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		ll n = gcd(a, b), m = gcd(c, d);
		if(n == m) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}