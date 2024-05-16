#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = n; i > 0; i--){
		for(int j = 1; j < i; j++){
			printf("~");
		}
		for(int j = 1; j <= n; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}