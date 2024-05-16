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
int check1(int n) {
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		if (n % 10 == 4) {
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int check2(int n) {
	int sum = 0;
	while(n != 0) {
		sum += n % 10;
		n /= 10;

	}
	return sum % 10 == 0;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int p1 = pow(10, n - 1), p2 = pow(10, n);
		for(int i = p1; i <= p2; i++) {
			if(tn(i) && check1(i) && check2(i)) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}