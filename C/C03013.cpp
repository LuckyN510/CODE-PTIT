#include<stdio.h>
#include<math.h>
#define ll long long

void Fibo(int n){
	ll f[n];
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i < n; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	for(int i = 0; i < n; i++){
		printf("%lld ", f[i]);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	Fibo(n);
	
}