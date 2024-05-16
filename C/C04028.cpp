#include <stdio.h>
void sort(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[j] > a[i]){
				int tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
		printf("Buoc %d: ", i);
		for(int j = 0; j <= i; j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, n);
}