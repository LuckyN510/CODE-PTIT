#include<stdio.h>
#include<string.h>

struct word
{
    char nd[1001];
    int cnt;
    int l;
};
typedef struct word word;

int find(word a[], char c[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(a[i].nd, c) == 0)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char tmp[1000];
    word a[1004];
    int d = 0;
    while(scanf("%s", tmp) != -1)
    {
        int t = find(a, tmp, d);
        if(t != -1)
        {
            a[t].cnt++;
        }
        else
        {
            strcpy(a[d].nd, tmp);
            a[d].cnt = 1;
            a[d].l = strlen(tmp);
            ++d;
        }
    }
    int max = -1e9;
    for(int i = 0; i < d; i++)
    {
        if(a[i].l > max)
        {
            max = a[i].l;
        }
    }
    for(int i = 0; i < d; i++){
        if(a[i].l == max)
        {
            printf("%s %d %d\n", a[i].nd, max, a[i].cnt);
        }
    }
}
