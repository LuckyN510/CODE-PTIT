#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
	char c[1000];
	gets(c);
	for(int i = 0; i < strlen(c); i++) {
		c[i] = tolower(c[i]);
	}
	int n = 0;
	char a[10][100];
	char *token = strtok(c, " ");
	while(token != NULL) {
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	for(int i = 0; i < n - 1; i++) {
		printf("%c", a[i][0]);
	}
	printf("%s@ptit.edu.vn", a[n - 1]);
	printf("\n");
}
