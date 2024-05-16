#include<stdio.h>
#include<math.h>
#define ll long long
int Fibo(int n){
	if(n == 1 || n == 0) return 1;
	ll f1 = 1, f2 = 0;
	for(int i = 2; i <= 93; i++){
		ll fn = f1 + f2;
		if(fn == n)
		return 1;
		f2 = f1;
		f1 = fn;
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	if(Fibo(n)){
		printf("1");
	}
	else{
		printf("0");
	}
}