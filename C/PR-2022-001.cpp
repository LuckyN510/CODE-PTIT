#include<stdio.h>
#include<math.h>
int main(){
	int u, d, n;
	scanf("%d%d%d", &u, &d, &n);
	int sum = 0;
	while(n != 0){
		int r = u + (n - 1)*d; 
		sum += r;
		--n;
	}
	printf("%d ", sum);
}