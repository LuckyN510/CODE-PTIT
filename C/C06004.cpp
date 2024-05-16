#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main() {
		char c[1000];
		gets(c);
		int n = strlen(c);
		int cs = 0, so = 0, kytu = 0;
		for(int i = 0; i < n; i++){
			if(isalpha(c[i])){
				++cs;
			}
			else if(isdigit(c[i])){
				++so;
			}
			else{
				++kytu;
			}
		}
		printf("%d %d %d", cs, so, kytu);

}
