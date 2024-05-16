#include<stdio.h>
#include<math.h>
#include<string.h>

int lis(char c[])
{
    int n = strlen(c);
    int lis[n];
    for(int i = 0; i < n; i++)
    {
        lis[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(c[i] > c[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        if(lis[i] > res)
        {
            res = lis[i];
        }
    }
    return 26 - res;
}
int main()
{   
    char c[1000];
    scanf("%s", c);
    printf("%d", lis(c));

}