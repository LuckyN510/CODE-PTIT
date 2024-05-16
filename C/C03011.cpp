#include<stdio.h>
#include<math.h>

int gt(int n){
	int res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}

int strong(int n){
	int r = 0, sum = 0;
	int a = n;
	while(n != 0){
		r = n % 10;
		n /= 10;
		sum += gt(r);
	}
	return sum == a;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a > b){
		int c = a;
		a = b;
		b = c;
	}
	for(int i = a; i <= b; i++){
		if(strong(i)){
			printf("%d ", i);
		}
	}
}