#include<stdio.h>
#include<math.h>

int p[10001];
int n = 10000;

void sang() {
	for(int i = 0; i < n; i++) {
		p[i] = 1;
	}
	p[0] = p[1] = 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(p[i]) {
			for(int j = i * i ; j <= n; j += i) {
				p[j] = 0;
			}
		}
	}
}

int main() {
	int t;
	scanf("%d", &t);
	sang();
	while(t--) {
		int n;
		scanf("%d", &n);
		for(int i = 2; i <= n / 2; i++) {
			if(p[i] && p[n - i]) {
				printf("%d %d ", i, n - i);
			}
		}
		printf("\n");
	}
}	