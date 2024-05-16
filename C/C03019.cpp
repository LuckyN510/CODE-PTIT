#include<stdio.h>
#include<math.h>
#define ll long long
int tn(int n) {
	int lat = 0, tmp = n;
	while(n != 0) {
		lat = lat * 10 + n % 10;
		n /= 10;

	}
	if(tmp == lat) {
		return 1;
	} else {
		return 0;
	}
	return lat == tmp;
}

int chiahet(int n) {
	int sum = 0;
	while(n != 0) {
		sum += n % 10;
		n /= 10;
	}
	if(sum % 10 == 0) {
		return 1;
	}
	return 0;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int cnt = 0;
		int p1 = pow(10, n - 1), p2 = pow(10, n);
		for(int i = p1; i < p2; i++) {
			if(tn(i) && chiahet(i)) {
				++cnt;
			}
		}
		printf("%d", cnt);
		printf("\n");
	}
}