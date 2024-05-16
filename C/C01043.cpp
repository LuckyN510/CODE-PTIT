#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int gt(int n) {
	int tmp = 1;
	for(int i = 1; i <= n; i++) {
		tmp *= i;
	}
	return tmp;
}

int strong(int n) {
	int sum = 0, m = n;
	while(n != 0) {
		sum += gt(n % 10);
		n /= 10;
	}
	if(sum == m) {
		return 1;
	} else {
		return 0;
	}
}
int main() {
	int n ;
	scanf("%d", &n);
	if(strong(n)) {
		printf("1\n");
	} else {
		printf("0\n");
	}

}