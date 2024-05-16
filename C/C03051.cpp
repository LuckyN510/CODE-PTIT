#include<stdio.h>
#include<math.h>

int prime[1000001];
int n = 1000000;

void sang(){
	for(int i = 0; i <= n; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(prime[i] == 1){
			for(int j = i * i; j <= n; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
	sang();
	int t;
	scanf("%d", &t);
	while(t--){
		long long l, r;
		scanf("%lld%lld", &l, &r);
		int a = sqrt(l), b = sqrt(r);
		if(1ll* a * b < l){
			++a;
		}
		long long cnt = 0;
		for(int i = a; i <= b;i++){
			if(prime[i]){
				++cnt;
			}
		}
		printf("%lld\n", cnt);
	}
	printf("\n");
}