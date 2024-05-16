#include <stdio.h>

void sort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int check = 0;
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                check = 1;
            }
        }
        
        if(check == 0) 
            break;

        printf("Buoc %d: ", i + 1);
        for(int j = 0; j < n; j++) {
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
    return 0; 
}
