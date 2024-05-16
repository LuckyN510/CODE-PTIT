#include<stdio.h>
#include<math.h>

int tn(int n) {
	int lat = 0, tmp = n;
	while(n != 0) {
		lat = lat * 10 + n % 10;
		n /= 10;
	}
	return lat == tmp;
}
int check(int n) {
	while(n != 0) {
		if(n % 10 == 9) 
			return 0;
		n /= 10;
	}
	return 1;
}
int main() {
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 2; i < n; i++) {
		if(tn(i) && check(i)) {
			printf("%d ", i);
			++cnt;
		}
	}
	printf("\n");
	printf("%d", cnt);
}