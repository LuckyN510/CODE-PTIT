#include<stdio.h>
#include<math.h>

void check(int a, int b){
	int sum1 = 0, sum2 = 0;
	int x = a, y = b;
	while(a != 0){
		sum1 += a % 10;
		a /= 10;
	}
	while(b != 0){
		sum2 += b % 10;
		b /= 10;
	}	
	if(sum1 > sum2){
		printf("%d %d", y, x);
	}
	else{
		printf("%d %d", x, y);
	}
	
}


int main(){
	int a, b;
	scanf("%d%d",&a, &b);
	if(a > 0 && b > 0)
	check(a, b);
	
}