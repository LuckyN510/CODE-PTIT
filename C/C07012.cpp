#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct merchandise{
	int ma;
	char ten[100];
	char nhom[100];
	double giamua;
	double giaban;
	double profit;
};
typedef struct merchandise mer;

int comp(const void*a, const void*b) {
	mer *x = (mer*)a;
	mer *y = (mer*)b;
	if(x->profit != y->profit ) {
		if(x->profit > y->profit) {
			return -1;
		} else {
			return 1;
		}
	} else {
		return y->profit - x->profit;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	mer a[n];
	for(int i = 0; i < n; i++){
		getchar();
		a[i].ma = i;
		gets(a[i].ten);
		gets(a[i].nhom);
		scanf("%lf%lf", &a[i].giamua, &a[i].giaban);
		a[i].profit = a[i].giaban - a[i].giamua;
	}
	qsort(a, n, sizeof(mer), comp);
	for(int i = 0; i < n; i++){
		printf("%d %s %s %.2lf\n", a[i].ma + 1, a[i].ten, a[i].nhom ,a[i].profit);
	}
}
/*
3
May tinh SONY VALIO
Dien tu
16400
17690
Tu lanh Side by Side
Dien lanh
18300
25999
Banh Chocopie
Tieu dung
27.5
37
*/