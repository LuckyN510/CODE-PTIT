#include <stdio.h>
#include <string.h>
#include<ctype.h>


int cnt[1000];
char a[1000][100];

int main() {
    char c[1000 * 100]; 
    fgets(c, sizeof(c), stdin);
    for(int i = 0; c[i]; i++) { 
        c[i] = tolower(c[i]);
    }

    char *token = strtok(c, " \n"); 
    int n = 0;

    while (token != NULL) {
        int check = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(a[i], token) == 0) {
                cnt[i]++;
                check = 1;
                break;
            }
        }
        if (!check) {
            strcpy(a[n], token);
            cnt[n]++;
            n++;
        }
        token = strtok(NULL, " \n");
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d\n", a[i], cnt[i]);
    }
    
    return 0;
}
