#include <stdio.h>
#include <math.h>

void nt(int n) {
    printf("%d = ", n);
    int star = 1;
    for (int i = 2; i <= sqrt(n); i++) { 
        int cnt = 0;
        while (n % i == 0) {
            ++cnt;
            n /= i;
        }
        if (cnt > 0) {
            if (!star) {
                printf(" * ");
            }
            printf("%d^%d", i, cnt);
            star = 0;
        }
    }
    if (n > 1) {
        if (!star) {
            printf(" * ");
        }
        printf("%d^1", n);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        nt(n);
        printf("\n");
    }
    return 0; 
}