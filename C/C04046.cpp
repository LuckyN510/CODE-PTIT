#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int comp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int min_kc = 1e9+5, cnt = 0;
		for(int i = 1; i < n; i++){
			if(a[i] - a[i - 1] < min_kc){
				min_kc = a[i] - a[i - 1];
				cnt = 1;
			}
			else if(a[i] - a[i - 1] == min_kc){
				++cnt;
			}	
		}
		printf("%d %d\n", min_kc, cnt);
	}
	return 0;
}