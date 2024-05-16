#include<stdio.h>
#include<math.h>
#define ll long long
int tn(ll n) {
	int lat = 0, tmp = n;
	while(n != 0) {
		lat = lat * 10 + n % 10;
		n /= 10;
	}
	return lat == tmp;
}

int solve1(ll n) {
	int sum = 0;
	while(n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum % 2 != 0;
}


int main() {
	int t;
	scanf("%d", &t);
	while(t--) {

		ll n;
		scanf("%lld", &n);
		if(tn(n) && solve1(n) ) {
			printf("YES");
		} else {
			printf("NO");
		}
		printf("\n");
	}
}
