#include<stdio.h>
#include<math.h>

int perfect(int n){
	int s = 0, a = n;
	if(n < 1)
	return 0;
	for(int i = 1; i <= sqrt(n); i++ ){
		if(n % i == 0){
			if(i == 1 || i * i == n)
				s = s + i;
			else
				s = s + i + (n / i);
		}
	}
	if(a == s)	return 1;
	else return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 2; i < n; i++){
		if(perfect(i)){
			printf("%d ", i);
		}
	}
}