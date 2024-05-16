#include <stdio.h>
#include <math.h>

struct sv {
	int msv;
	char ten[100];
	char ns[20];
	double mon1, mon2, mon3;
	double sum;
};
typedef struct sv sv;

int main() {
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
	double max = 0;
	for(int i = 0; i < n; i++){
		if(a[i].sum > max){
			max = a[i].sum;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i].sum == max){
			printf("%d %s %s %.1lf\n", a[i].msv + 1, a[i].ten, a[i].ns, a[i].sum);
		}
	}
}