#include<stdio.h>
#include<string.h>

struct word{
    char nd[1001];
    int cnt;
    int l;
};
typedef struct word word;

int tn(char c[]){
    int d = 0;
    int n = strlen(c);
    for(int i = 0; i < n; i++){
        if(c[i] == c[n - i - 1]){
            ++d;
        }
    }
    if(d == n){
        return 1;
    }
    else{
        return 0;
    }
} 

int find(word a[], char c[], int n){
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].nd , c)  == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    char tmp[1001];
    word a[1002];
    int d = 0;
    while(scanf("%s", tmp) != EOF){
        if(tn(tmp) == 1){ 
            int t = find(a, tmp, d);
            if(t != -1){
               a[t].cnt++; 
            }
            else{
                strcpy(a[d].nd, tmp);
                a[d].cnt = 1;
                a[d].l = strlen(tmp);
                d++;
            }
        }
    }
    int max = -1;
    for(int i = 0; i < d; i++){
        if(a[i].l > max){
            max = a[i].l;
        }
    }
    for(int i = 0; i < d; i++){
        if(max == a[i].l){
            printf("%s %d\n", a[i].nd, a[i].cnt);
        }
    }
    return 0;
}