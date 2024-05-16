#include<stdio.h>
#include<math.h>
int cp(int n){
	int can = sqrt(n);
	if(can * can == n){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(cp(n)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}n