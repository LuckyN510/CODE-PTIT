#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d%d", &m, &n);
	for( int i = 1; i <= n  ; i++) {
		for (int j = 1 ; j <= m ; j++ ) {
			if(i == 1 || i == n || j == 1 || j == m  )
				printf("*");
			else
				printf(" ");
		}
		printf(" \n");

	}
}