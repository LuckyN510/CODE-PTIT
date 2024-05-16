#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = i; j < n ;j++){
			printf("~");
		}
		int h = 0;
		for(int j = 1; j <= i; j++){
			printf("%d", 2*j - 1);
			++h;
		}
		for(int j = h; j > 1; j--){
			printf("%d", 2*j - 3);
		}
		printf("\n");
	}
}