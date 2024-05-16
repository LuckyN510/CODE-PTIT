#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000  


int comp1(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int comp2(const void *a, const void *b) 
{
    return (*(int*)b - *(int*)a);
}
void solve(int m, int n, char order, int *a, int *b) 
{
    int result[MAX_SIZE * 2];
    int i, j;

    if (order == 'T') 
	{
        for (i = 0; i < m;i++) result[i] = a[i];
        for (i = 0; i < n; i++) result[m + i] = b[i];
        qsort(result, m + n, sizeof(int), comp1);
    } 
	else if (order == 'G') 
	{
        for (i = 0; i < m; i++) result[i] = a[i];
        for (i = 0; i < n; i++) result[m + i] = b[i];
        qsort(result, m + n, sizeof(int), comp2);
    } 
	else if (order == 'F') 
	{
        for (i = 0; i < m; i++) result[i] = a[i];
        for (i = 0; i < n; i++) result[m + i] = b[i];
    } 
	else if (order == 'A') 
	{
        for (i = 0; i < n; i++) result[i] = b[i];
        for (i = 0; i < m; i++) result[n + i] = a[i];
    }
    for (i = 0; i < m + n; i++) 
	{
        if (i > 0) printf(" ");
        printf("%d", result[i]);
    }
    printf("\n");
}

int main() 
{
    int t, m, n;
    char order;
    int a[MAX_SIZE];
    int b[MAX_SIZE];
    scanf("%d", &t);
    while (t--) 
	{
        scanf("%d %d %c", &m, &n, &order);
        
        for (int i = 0; i < m; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        solve(m, n, order, a, b);
    }

    return 0;
}
