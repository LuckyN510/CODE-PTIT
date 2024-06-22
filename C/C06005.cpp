#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lower(char c[]) {
    for (int i = 0; i < strlen(c); i++) {
        c[i] = tolower(c[i]);
    }
} 

int main()
{
    char c[10000];
    gets(c);
    lower(c);
    int n = 0;
    char a[1000][100];
    char *token = strtok(c, " ");
    while(token != NULL)
    {
        strcpy(a[n++], token);
        token = strtok(NULL, " ");
    }
    int b[10000];
    for(int i = 0; i < n; i++)
    {
        int cnt = 1;
        if(b[i] == 0)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(strcmp(a[i], a[j]) == 0)
                {
                    b[j] = 1;
                    cnt++;
                }
            }
            printf("%s %d\n", a[i], cnt);
        }
    }
}

