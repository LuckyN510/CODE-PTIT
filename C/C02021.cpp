#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int h = i;
		int k = n - 1;
		for(int j = 1 ; j <= i; j++){
			printf("%d ", h);
			h += k;
			k--;
		}
		
		printf("\n");
		
	}
}