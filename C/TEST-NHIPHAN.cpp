#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[100], index = 0;
	if (n == 0) {
		printf("0");
		return 0;
	}
	while(n != 0) {
		a[index++] = n % 2;
		n /= 2;
	}
	for(int i = index - 1; i >= 0; i--) {
		printf("%d", a[i]);
	}
}