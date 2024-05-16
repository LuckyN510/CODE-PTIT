#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int comp1(const void*a, const void*b) 
{
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}
int comp2(const void*a, const void*b) 
{
	int *x = (int*)a;
	int *y = (int*)b;
	return *y - *x;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		qsort(a, n, sizeof(int), comp1);
		qsort(b, n, sizeof(int), comp2);
		printf("Test %d:\n", i);
		for(int i = 0; i < n + n; i++){
			if(i % 2 == 0){
				printf("%d ", a[i / 2]);
			}
			else{
				printf("%d ", b[(i - 1) / 2]);
			}
		}
		printf("\n");
	}
}