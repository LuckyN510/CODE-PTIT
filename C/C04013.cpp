#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n > 1 && n < 100) {
        int a[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int cnt[100] = {0};
        for(int i = 0; i < n; i++) {
            cnt[a[i]]++;
        }
        int dem = 0;
        for(int i = 0; i < n; i++) { 
            if(cnt[a[i]] == 1) {
                ++dem;
            }
        }
        printf("%d\n", dem);
        int check = 0;
        for(int i = 0; i < n; i++) { 
            if(cnt[a[i]] == 1) {
                printf("%d ", a[i]);
                cnt[a[i]] = 0; 
                check = 1;
            }
        }
        if(!check) {
            printf("0");
        }
    }
    return 0;
}