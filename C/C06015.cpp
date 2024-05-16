#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void fullhoa(char c[]) {
	for(int i = 0; i < strlen(c); i++) {
		c[i] = toupper(c[i]);
	}
}
void firstHoa(char c[]) {
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
		int n = 0;
		char a[1000][100];
		while(token != NULL) {
			strcpy(a[n], token);
			++n;
			token = strtok(NULL, " ");
		}
		for(int i = 1; i < n; i++) {
			firstHoa(a[i]);
			printf("%s", a[i]);
			if(i == n - 1) {
				printf(", ");
			} else {
				printf(" ");
			}
		}
		fullhoa(a[0]);
		printf("%s", a[0]);
		printf("\n");
	}
}
