#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char c[100];
	gets(c);
	int n = strlen(c) ;
	if(c[n - 1] != '0'){
		printf("%c", c[n - 1]);
	}
	for(int i = 1; i < n - 1; i++){
		printf("%c", c[i]);
	}
	printf("%c", c[0]);
}