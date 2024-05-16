#include<stdio.h>
#include<math.h>
#include<string.h>
int check(int a[], int n) {
	int le = 0, chan = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] % 2 == 0) {
			++chan;
		} else {
			++le;
		}
	}
	if((n % 2 == 0 && chan > le) || n % 2 != 0 && chan < le) {
		return 1;
	}
	else{
		return 0;
	}
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n = 0; // dem so luong phan tu trong mang
		int a[1000] = {0};
		while(scanf("%d", &a[n])!= -1) {
			n++;
			char c = getchar();
			if(c == '\n') break;
		}
		if(check(a, n)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
