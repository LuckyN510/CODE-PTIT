#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long hh = 1e9, hc = 1e9;
    int x, y;
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        if(x < hh ) hh = x;
        if(y < hc) hc = y;
    }
    printf("%lld", 1ll * hh * hc);
}