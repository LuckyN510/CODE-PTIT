#include<stdio.h>
#include<math.h>

int main() {
	int n;
	scanf("%d", &n);
	long long tich = 1;
	while(n > 0) {
		tich *= n % 10;
		n /= 10;
	}
	printf("%lld", tich);
	return 0;
}