#include<stdio.h>
#include<math.h>
int perfect(int n) {
	int sum = 0, a = n;
	if(n < 1) return 0;
	for(int i = 1; i <= sqrt(n); i++) {
		if(n % i == 0) {
			if(i == 1 || i * i == n) {
				sum += i;
			} else {
				sum += i + n / i;
			}
		}
	}
	return a == sum;
}
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if(a > b){
		int c = a;
		a = b;
		b = c;
	}
	for(int i = a + 1; i <= b; i++) {
		if(perfect(i)) {
			printf("%d ", i);
		}
	}
}