#include<stdio.h>
#include<math.h>

int check(double a, double b, double c){
	if(a == 0 || b == 0 || c == 0){
		return 0;
	}
	if(a + b <= c || a + c <= b || b + c <= a){
		return 0;
	}
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		double a, b, c, d, e, f;
		scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
		double x = sqrt((c - a) * (c - a) + (d - b) * (d - b));
		double y = sqrt((e - c) * (e - c) + (f - d) * (f - d));
		double z = sqrt((e - a) * (e - a) + (f - b) * (f - b));
		if(check(x, y, z)){
			printf("%.3lf\n", (double)x + y + z);
		}
		else{
			printf("INVALID\n");
		}
	}
}