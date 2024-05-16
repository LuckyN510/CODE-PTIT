#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	int n, p;
	scanf("%d%d", &n, &p);
	int cnt = 0, tmp;
	int i = 1;
	while(p * i <= n){
		tmp = p * i;
		while( tmp % p == 0){
			tmp /= p;
			++cnt;
		}
		++i;
	}
	printf("%d", cnt);
	printf("\n");
}
}