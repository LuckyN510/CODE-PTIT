#include<stdio.h>
#include<math.h>

int prime[2000001];
int n = 2000000;
void sang(){
	for(int i = 1; i <= n; i++){
		prime[i] = i;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(prime[i] == i){
			for(int j = i * i; j <= n; j +=i){
				if(prime[j] == j){
					prime[j] = i;
				}
			}
		}
	}
}

int tongUoc(int n){
	long long sum = 0;
	while(n != 1){
		sum += prime[n];
		n /= prime[n];
	}
	return sum;
}
int main(){
	sang();
	int t;
	scanf("%d", &t);
	long long tong = 0;
	while(t--){	
	int n;
	scanf("%d", &n);
		tong += tongUoc(n);
	}
	printf("%lld\n", tong);
	printf("\n");
}