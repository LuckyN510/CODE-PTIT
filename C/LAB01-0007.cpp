#include<stdio.h>
#include<math.h>
int main() 
{
	int n;
	scanf("%d", &n);
	int a[n], s[n];
	for(int i = 0; i < n ; i++) 
	{
		scanf("%d", &a[i]);
	}
	s[0] = a[0];
	for(int i = 1; i < n; i++) 
	{
		s[i] = s[i - 1] + a[i];
	}
	int max = -1e9;
	for(int i = 0; i < n ; i++) 
	{
		if(s[i] > max)
			max = s[i];
	}
	double tb = (double) max / n;
	printf("%.3lf", tb);
}