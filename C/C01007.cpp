#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	int tong  = a + b;
	int hieu = a - b;
	long long tich = 1ll * a * b;
	int phannguyen = a / b;
	int phandu = a % b;
	float thuong = (float) a / b;
	printf("%d\n%d\n%lld\n%d\n%d\n%.2f\n", tong, hieu,tich,phannguyen,phandu,thuong);
	
	return 0;
}