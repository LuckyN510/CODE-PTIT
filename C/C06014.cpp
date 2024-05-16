#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void first(char c[]) {
	c[0] = toupper(c[0]);
	for(int i = 1; i < strlen(c); i++) {
		c[i] = tolower(c[i]);
	}
}
int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char c[1000];
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL) {
			first(token);
			printf("%s", token);
			token = strtok(NULL, " ");
			if(token != NULL) {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}