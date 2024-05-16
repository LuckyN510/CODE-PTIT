#include<stdio.h>
#include<math.h>
int hh2(int n){
	int tong = 1;
	for(int i = 2; i < sqrt(n); i++){
		if(n % i == 0){
			tong += i;
			if(i != n / i){
				tong += n / i;
			}			
		}
	}
	if(tong == n){
		return 1;
	}
	else{
		return 0;
	}

}
int main(){
	int n;
	scanf("%d", &n);
	if(hh2(n)){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
	
}