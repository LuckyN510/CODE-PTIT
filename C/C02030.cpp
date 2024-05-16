#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int h;
	for(int i = 1; i <= n; i++){
		int h = 0;
		for(int j = 1 ; j <= i; j++){
			printf("%c", 2 * j - 1 + 63);
			h++;
		}
		for(int j = h ; j > 1; j--){
			printf("%c", 2 * j - 3 + 63);
		}
		printf("\n");
	}
}