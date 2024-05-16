#include<stdio.h>
#include<math.h>
int gcd(int a, int b) {
	while(b > 0) {
		int tmp = a % b	;
		a = b;
		b = tmp;
	}
	return a;
}
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = n; i < m; i++){
		for(int j = i + 1; j <= m; j++){
			if(gcd(i ,j) == 1){
				printf("(%d,%d)\n", i, j);
			}
		}
	}
	return 0;
}