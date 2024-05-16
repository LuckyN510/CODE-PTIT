#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int h = 0;
		for(int j = 1; j <= i; j++){
			printf("%d",2 * j);
			++h;
		}
		for(int j = h; j > 1; j--){
			printf("%d", 2 * j - 2);
		}
		printf("\n");
	}
}