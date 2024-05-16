#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct tg{
	double x, y, z;
	double p ,s;
};
typedef struct tg tg;

tg a[100], tmp;

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%lf%lf%lf", &a[i].x, &a[i].y, &a[i].z);
		a[i].p = (a[i].x + a[i].y + a[i].z) / 2;
		a[i].s = sqrt(a[i].p*(a[i].p - a[i].x) * (a[i].p - a[i].y) * (a[i].p - a[i].z));
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i].s > a[j].s){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%1.lf %1.lf %1.lf\n", a[i].x, a[i].y, a[i].z);
	}
}