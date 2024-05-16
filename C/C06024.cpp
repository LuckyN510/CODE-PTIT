#include<stdio.h>
#include<string.h>

void latnguoc(int c[], int n) {
	int l = 0, r = n - 1;
	while(l < r) {
		int tmp = c[l];
		c[l] = c[r];
		c[r] = tmp;
		++l;
		--r;
	}
}

// quy dinh a co nhieu chu so hon b;
void tong(char a[], char b[]) {
	int n1 = strlen(a), n2 = strlen(b);
	int x[n1], y[n1], z[n1 + 1];
	int n = 0;
	for(int i = 0; i < n1; i++) {
		x[i] = a[i] - '0'; // chuyen ve dang so
	}
	for(int i = 0; i < n2; i++) {
		y[i] = b[i] - '0'; // chuyen ve dang so
	}
	latnguoc(x, n1);
	latnguoc(y, n2);
	for(int i = n2; i < n1; i++) {
		y[i] = 0;     // cho cac so dang sau == 0 neu so chu so cua b < a
	}
	int nho = 0;
	for(int i = 0; i < n1; i++) {
		int tmp = x[i] + y[i] + nho;
		z[n++] = tmp % 10;
		nho = tmp / 10;
	}
	if(nho) {
		z[n++] = nho; // in ra nhung so con lai
	}
	for(int i = n - 1; i >= 0; i--) {
		printf("%d", z[i]);
	}
}
int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char a[1000], b[1000];
		gets(a);
		gets(b);
		int n1 = strlen(a), n2 = strlen(b);
		if(n1 >= n2) {
			tong(a, b);
		} 
		else {
			tong(b, a);
		}
		printf("\n");
	}
}
