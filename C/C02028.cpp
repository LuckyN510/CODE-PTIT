#include<stdio.h>

int main() {
	int m;
	scanf("%d",&m);
	int k = 1;
	for(int i = 1; i <= m; i++){
		int h = 0;
		for(int j = k; j <= m; j++){
			printf("%c", (2 * j - 1 ) + 64);
		}
		k++;;
		printf("\n");
	}
	
}