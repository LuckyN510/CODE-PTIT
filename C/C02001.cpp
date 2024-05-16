#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i <= n - 1; i++){
		for(int j = 0; j <= n - 1; j++){
			printf("*");
		}
		printf("\n");
	}
	
}