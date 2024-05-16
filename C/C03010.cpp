#include<stdio.h>
#include<math.h>
#define ll long long
int gt(int n){
	ll res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}

int strong (int n){
	int d , sum = 0;
	int a = n;
	while(n > 0){
		d = n % 10;
		n /= 10;
		sum += gt(d);
	}
	if(a == sum) return 1;
	else return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i < n; i++){
		if(strong(i)){
			printf("%d ", i);
		}
	}
}