#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	int tong  = a + b;
	int hieu = a - b;
	long long tich = 1ll * a * b;
	float thuong = (float) a / b;
	int phandu = a % b;
	if(a > 0 && a <= 1000 && b > 0 && b <= 1000)
	printf("%d %d %lld %.2f %d", tong, hieu,tich,thuong,phandu);
    if(b == 0)
    printf("0");
    
	return 0;
}