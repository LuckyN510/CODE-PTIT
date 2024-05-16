#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
	char c[100];
	gets(c);
	int n = 0;
	char a[1000][100];
	char *token = strtok(c, " ");
	while(token != NULL) {
		int check = 0;
		for(int i = 0; i < n; i++) {
			if(strcmp(a[i], token) == 0) {
				check = 1;
				break;
			}
		}
		if(!check) {
			strcpy(a[n], token);
			++n;
		}
		token = strtok(NULL, " ");
	}

	for(int i = 0; i < n; i++) {
		printf("%s ", a[i]);
	}
}