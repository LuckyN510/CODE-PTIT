#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[25005], b[25005], len = 0, xuong = 0, min = 100000;
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i], &b[i]);
		len += a[i];
		xuong += b[i];
	}
	if (len > xuong)
	{
		for (int i = 0; i < n; i++)
		{
			if (b[i] < min) min = b[i];
		}
		printf("%d", len+min);
	}
	else 
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] < min) min = a[i];
		}
		printf("%d", xuong+min);
	}
}