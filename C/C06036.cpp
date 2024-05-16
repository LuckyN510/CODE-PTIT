#include<stdio.h>
#include<string.h>
int main(){
	char c[100005];
	gets(c);
	printf("%d", strlen(c) - 1);
}