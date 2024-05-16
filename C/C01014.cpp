#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	float x =(float)-b / a;
	if(a == 0 && b != 0)
	printf("Vo nghiem");
	else if(a == 0 && b == 0 )
	printf("Vo so nghiem");
	else
		printf("%.2f",x);
	return 0;
}