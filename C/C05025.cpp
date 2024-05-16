#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int dem = 1;
	while (t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		int a[105][105];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++) scanf("%d", &a[i][j]);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				for (int k = i; k < n; k++)
				{
					for (int l = j; l < m; l++)
					{
						if (a[i][j] > a[k][l])
						{
							int tmp = a[i][j];
							a[i][j] = a[k][l];
							a[k][l] = tmp;
						}
					}
				}
			}
		}
		printf("Test %d:\n", dem++);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++) printf("%d ", a[i][j]);
			printf("\n");
		}
	}
}