#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		int ktao;
		if(i % 2 == 0) {
			ktao = i * (i + 1) / 2;
		} 
		else {
			ktao = i * (i + 1) / 2 - i + 1;
		}
		for(int j = 1; j <= i; j++){
			if(i % 2 == 0){
				printf("%c ", ktao + 96);
				ktao--;
			}
			else{
				printf("%c ", ktao + 96);
				ktao++;
			}
		}
		printf("\n");
	}
}