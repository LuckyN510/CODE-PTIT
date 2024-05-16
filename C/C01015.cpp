#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	float denta = b * b - 4 * a * c, x1,x2;
	if(denta < 0){
		printf("NO\n");
		
	}
	else if(denta == 0){
		x1 = (float) -b / (2*a);
		printf("%.2f", x1);
	}
	else{
		x1 =(float) (-b + sqrt(denta)) / (2*a);
		x2 =(float) (-b - sqrt(denta)) / (2*a);
		printf("%.2f %.2f",x1,x2);
	}
	return 0;
}