#include<stdio.h>
#include<string.h>
void xoay(char a[])
{
	char b[55];
	strcpy(b, a); // Copy vao mang moi de xoay mang cu
	for (int i = 1; i < strlen(a); i++)
	{
		a[i-1] = b[i]; // Xoay ki tu 0->1, ...
	}
	a[strlen(a)-1] = b[0]; // Ki tu dau dao len cuoi
}
int main()
{
	int n;
	scanf("%d", &n);
	char a[55][55];
	for (int i = 0; i < n; i++) scanf("%s", a[i]);
	char s[55];
	strcpy(s, a[0]); // Copy a[0] de lay a[0] lam moc so sanh dau tien
	char b[55];
	int m = strlen(s);
	int tmp = 1;
	int min = 100000007;
	for (int i = 0; i < m; i++) // Lap lai m lan xau s(lam cho xau s quay toi khi tro lai nhu ban dau)
	{							// Tim ra so buoc it nhat de xoay cac sau a[i] ve giong nhau
		int cnt = 0;
		for (int j = 0; j < n; j++)
		{
			int k;
			strcpy(b, a[j]);
			for (k = 0; k < m; k++)
			{
				if (strcmp(s, b) == 0) // So sanh neu xau a[j] da giong voi xau s thi + so buoc la k
				{
					cnt += k;
					break;
				}
				xoay(b); // Voi moi buoc xoay xau b 1 lan
			}
			if (k==m)
			{
				tmp = 0; // Neu da xoay het xau b ma khong the ve xau s thi khong thoa man de bai
				break;
			}
		}
		if (cnt < min) min = cnt; // Cap nhat so buoc it nhat
		xoay(s); // Tao xau s moi la xau s cu va xoay 1 lan
	}
	if (tmp == 0) printf("-1");
	else printf("%d", min);
}