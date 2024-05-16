#include<stdio.h>
#include<math.h>
#include<string.h>;
#include<ctype.h>;
int check(char a[]){
	if(a[0] == a[strlen(a) - 1]){
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
		char n[100];
		scanf("%s", &n);
		if(check(n) == 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}