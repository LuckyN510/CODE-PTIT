#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int k = 1;
	for(int i = 1; i <= n; i++){
		int h = 0;
		for(int j = k; j <= i; j++){
			printf("%d", 2*j - 1);
			++h;
		}
		for(int j = h; j > 1; j--){
			printf("%d", 2*j - 3);
		}
		printf("\n");
	}
}