#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int comp(const void *a, const void *b){

	int *x = (int*)a;
	int *y = (int*)b;
	if(*x < *y){			
		return -1;							
	}
	else{
		return 1;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	if( n > 1 && n < 100) {
		int a[n];
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		qsort(a, n, sizeof(int), comp);
		for(int i = 0; i < n; i++) {
			if(a[i] % 2 == 0) {
				printf("%d ", a[i]);
			}
		}
		for(int i = 0; i < n; i++) {
			if(a[i] % 2 != 0) {
				printf("%d ", a[i]);
			}
		}
	}
}