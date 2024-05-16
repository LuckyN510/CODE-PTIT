#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
/*
nguyen duc toan
9.3 9.3 9.6
le minh son
8.6 9.3 8.6
luu quoc trieu
5.6 9.8 3.6
*/
struct sv {
	int msv;
	char ten[100];
	double mon1, mon2, mon3;
};

typedef struct sv sv;

sv a[100];
char s[100];

void add(int n) {
	int d = 1;
	while(d <= n) {
		a[d].msv = d;
		char s[100] = " ";
		scanf("\n");
		gets(a[d].ten);
		scanf("%lf%lf%lf", &a[d].mon1, &a[d].mon2, &a[d].mon3);
		d++;
	}
}

void change(int d) {
	scanf("\n");
	gets(a[d].ten);
	scanf("%lf%lf%lf", &a[d].mon1, &a[d].mon2, &a[d].mon3);
}
void in(int d) {
	for(int i = 1; i <= d; i++) {
		if(a[i].mon1 < a[i].mon2 && a[i].mon2 < a[i].mon3) {
			printf("%d %s %.1lf %.1lf %.1lf\n", a[i].msv, a[i].ten, a[i].mon1, a[i].mon2, a[i].mon3);
		}
	}
}

int main() {
	int n;
	while(1) {
		int lc ;
		scanf("%d", &lc);
		if(lc == 1) {
			scanf("%d\n", &n);
			add(n);
			printf("%d\n", n);
		} else if(lc == 2) {
			int m;
			scanf("%d\n", &m);
			change(m);
			printf("%d\n", m);
		} else if(lc == 3) {
			in(n);
			return 0;
		}
	}
}