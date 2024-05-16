#include<stdio.h>
#include<math.h>

void nt(int n, int test) {
    printf("Test %d: ", test);
    for (int i = 2; i * i <= n; ++i) {
        int dem = 0;
        while (n % i == 0) {
            ++dem;
            n /= i;
        }
        if (dem > 0) {
            printf("%d(%d) ", i, dem);
        }
    }
    if (n > 1) {
        printf("%d(1) ", n); 
    }
    printf("\n");
}

int main() {
    int t, n;
    scanf("%d", &t);
    for (int test = 1; test <= t; ++test) {
        scanf("%d", &n);
        nt(n, test);
    }
    return 0;
}