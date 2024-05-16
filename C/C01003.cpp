#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n; 
		scanf("%lld", &n);
		printf("%lld\n", 1ll * n * n);
	}
	return 0;
}