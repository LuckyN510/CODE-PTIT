#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char c[100];
	gets(c);
	char d[100];
	gets(d);
	char *token = strtok(c, " ");
	while(token != NULL){
		if(strcmp(token, d) != 0){
			printf("%s ", token);
		}
		token = strtok(NULL, " ");
	}

}