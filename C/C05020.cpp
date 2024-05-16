#include<stdio.h>
#include<math.h>
#define ll long long
ll f[100];
void khoitao(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2;  i <= 90; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}
int main(){
	khoitao();
	int n;
	scanf("%d", &n);
	ll a[n][n];
	int cnt = 0;
	int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
	while(c1 <= c2 && h1 <= h2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = f[cnt++];
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			a[i][c2] = f[cnt++];
		}
		--c2;
		for(int i = c2; i >= c1; i--){
			a[h2][i] = f[cnt++];
		}
		--h2;
		for(int i = h2; i >= h1; i--){
			a[i][c1] = f[cnt++];
		}
		++c1;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
}