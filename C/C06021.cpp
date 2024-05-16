#include <stdio.h>
#include <string.h>

int uuthe(char c[]) {
    int chan = 0, le = 0, n = strlen(c);
    if (c[0] == '0') return -1;
    for(int i = 0; i < n; i++) {
        if(c[i] >= '0' && c[i] <= '9') {
            if((c[i] - '0') % 2 == 0) {
                ++chan;
            } 
            else {
                ++le;
            }
        }
        else {
            return -1;
        }
    }
    if(chan > le && n % 2 == 0) {
        return 1;
    }
    if(chan < le && n % 2 != 0) {
        return 1;
    } 
    else {
        return 0;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    getchar(); 
    while(t--) {
        char c[1001]; 
        fgets(c, sizeof(c), stdin); 
        c[strcspn(c, "\n")] = '\0';
        if(uuthe(c) == 1) {
            printf("YES\n");
        } 
        else if (uuthe(c) == 0) {
            printf("NO\n");
        } 
        else {
            printf("INVALID\n");
        }
    }
    return 0;
}