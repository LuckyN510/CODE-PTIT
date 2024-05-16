#include<stdio.h>
#include<math.h>

int tongcs(int n) {
	int sum = 0;
	while(n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int tongnt(int n){
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++){
		while( n % i == 0){
			sum += tongcs(i);
			n /= i;
		}
	}
	if(n > 1){
		sum += tongcs(n);
	}
	return sum;
}
int check(int n){
	if(tongcs(n) == tongnt(n)){
		return 1;
	}
	else{
		return 0;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	if(check(n)){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}