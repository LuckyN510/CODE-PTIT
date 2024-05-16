#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct sv{
	int msv;
	char ten[100];
	char ns[20];
	double mon1, mon2, mon3;
	double sum;	
};
typedef struct sv sv;

int comp(const void*a, const void*b) {
	sv *x = (sv*)a;
	sv *y = (sv*)b;
	if(x->sum != y->sum ) {
		if(x->sum > y->sum) {
			return -1;
		} else {
			return 1;
		}
	} else {
		return y->sum - x->sum;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	sv a[n];
	for(int i = 0; i < n; i++) {
		getchar();
		gets(a[i].ten);
		gets(a[i].ns);
		scanf("%lf%lf%lf", &a[i].mon1, &a[i].mon2, &a[i].mon3);
		a[i].msv = i;
		a[i].sum = a[i].mon1 + a[i].mon2 + a[i].mon3;
	}
	qsort(a, n, sizeof(sv), comp);
	for(int i = 0; i < n; i++){
		printf("%d %s %s %.1lf\n", a[i].msv + 1, a[i].ten, a[i].ns, a[i].sum);
	}
}



