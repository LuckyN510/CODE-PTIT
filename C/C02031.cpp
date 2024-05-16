#include<stdio.h>

int main() {
	int m;
	scanf("%d",&m);
	for(int i = m ; i >= 1; i--) {
		int k = m;
		for(int j = i; j >= 1; j--) {
			printf("%c", k + 63);
			k++;
		}
		m--;

		printf("\n");
	}
}