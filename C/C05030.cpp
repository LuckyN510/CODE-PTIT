#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		char a[1005][1005];
		for (int i = 0; i < n; i++)
		{
			scanf("%s", &a[i]);
		}
		long long cnt = 0;
		int h1[1005] = {0}, c1[1005] = {0}, h2[1005] = {0}, c2[1005] = {0}; 
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == '1')
				{
					h1[i]++;
					c1[j]++;
				}
				else if (a[i][j] == '2')
				{
					h2[i]++;
					c2[j]++;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == '1') cnt+= h2[i]*c2[j];
				else if (a[i][j] == '2') cnt+=h1[i]*c1[j];
			}
		}
		printf("%lld\n", cnt);
	}
}