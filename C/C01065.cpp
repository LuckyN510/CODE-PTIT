#include<stdio.h>
#include<math.h>
#include<string.h>
int nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if( n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){	
	char c[1000];
	gets(c);
	int cnt[10] = {0};
	for(int i = 0; i <= strlen(c) - 1; i++){
		int digit = c[i] - '0';
		if(nt(digit)){
			cnt[digit]++;
		}
	}
	for(int i = 0; i < 10; i++){
		if(cnt[i] > 0){
			printf("%d %d\n", i , cnt[i]);
		}
	}
}