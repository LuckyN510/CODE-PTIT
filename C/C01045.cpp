#include<stdio.h>
#include<math.h>

int main(){
	int n; scanf("%d", &n);
	int e = n % 10;
	int f = 0;
	while(n != 0){
		f = n % 10;
		n /= 10;	
	} 
	printf("%d %d", f, e);
}