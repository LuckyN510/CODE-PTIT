#include<stdio.h>
#include<math.h>

int b[100001];
int main()
{
	int n;
	scanf("%d", &n);
	int a[n], cnt = 0;
	for(int i = 0; i < n ; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		b[a[i]]++;
	}
	for(int i = 0; i < 10000; i++)
	{
		if(b[i] > 1)
		{
			++cnt;
		}
	}
	printf("%d\n", cnt);
	for(int i = 0; i < n ;i++)
	{
		if(b[a[i]] > 1){
			printf("%d ", a[i]);
			b[a[i]] = 0;
		}
	}
	
}