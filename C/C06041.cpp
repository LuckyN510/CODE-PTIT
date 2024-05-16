#include<stdio.h>
#include<string.h>
int main()
{
	char a[100005], b[100005];
	scanf("%s", a);
	int cnt = 0;
	char tmp = 'a';
	for (int i = strlen(a)-1; i >= 0; i--)
	{
		if (a[i]>=tmp)
		{
			tmp = a[i];
			b[cnt++] = a[i];
		}
	}
	for (int i = cnt-1; i >=0; i--) printf("%c", b[i]);
}