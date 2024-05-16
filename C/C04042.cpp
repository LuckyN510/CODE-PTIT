#include<stdio.h>
#define ll long long

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0 ; i < n; i++){
            scanf("%d", &a[i]);
        }
        int check = 0;        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(a[i] == a[j]){
                    check = 1;
                    printf("%d\n", a[i]);
                    break;
                }
            }
            if(check) break;
        }
        if(check == 0){
            printf("NO\n");
        }
    }
    return 0;
}