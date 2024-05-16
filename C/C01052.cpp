#include<stdio.h>
#include<math.h>

int gcd(int n){
	int dem = 0; 
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(i % 2 == 0)
			++dem;
			if(i != n / i && n / i % 2 == 0)
			++dem;
		}
	}
	return dem;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n",gcd(n));
	}
}