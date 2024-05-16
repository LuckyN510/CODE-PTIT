#include<stdio.h>
#include<math.h>
#define ll long long

int giam(int n) {
	int value = -1;
	while(n > 0) {
		int r = n % 10;
		if(r <= value){
			return 0;
		}
		value = r;
		n /= 10;
	}
	return 1;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {

		int a, b;
		scanf("%d%d", &a, &b);
		int dem = 0;
		for(int i = a; i <= b; i++) {
			if(giam(i)) {
				++dem;
			}
		}
		printf("%d\n", dem);
	}
}