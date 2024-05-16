#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[100007] = {}, x , y;
	for(int i = 1; i < n; i++){
		scanf("%d%d", &x, &y);
		a[x]++;
		a[y]++;
	}
	for(int i = 1; i <= 100000; i++){
		if(a[i] == n - 1){
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
}