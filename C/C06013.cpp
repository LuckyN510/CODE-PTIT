#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

char a[11] = "0123456789";

void check(char c[]) {
    int cnt = 0, d[10000] = {0};
    for (int i = 0; i < strlen(c); i++) {
        if (c[0] == '0') {
            printf("INVALID\n");
            return ;
        }
        if (c[i] < '0' || c[i] > '9') {
            printf("INVALID\n");
            return ;
        }
        for (int j = 0; j < 10; j++) {
            if (c[i] == a[j]) {
                d[j]++;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        if (d[i] != 0) 
            ++cnt;
	}
    if (cnt == 0) {
        printf("INVALID\n");
    } else if (cnt == 10) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        char c[1000];
        gets(c);
        check(c);
    }
    return 0;
}