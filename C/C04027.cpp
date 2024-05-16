#include<stdio.h>
#include<math.h>

void sort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int pos = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[pos]){
				pos = j;
			}
		}
		int tmp = a[i];
		a[i] = a[pos];
		a[pos] = tmp;
		printf("Buoc %d: ", i + 1);
		for(int i = 0; i < n;i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	sort(a, n);
}