#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char c[], char d[]) {
	char s1[100], s2[100];
	strcpy(s1, c);
	strcpy(s2, d);
	for(int i = 0; i < strlen(s1); i++) {
		s1[i] = tolower(s1[i]);
	}
	for(int i = 0; i < strlen(s2); i++) {
		s2[i] = tolower(s2[i]);
	}
	return strcmp(s1, s2);
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	for(int i = 1; i <= t; i++) {

		char c[1000], d[50];
		gets(c);
		gets(d);
		int n = 0, h = 0;
		char a[1000][100];
		for(int i = 0; i < strlen(c); i++) {
			if(c[i] == ' ' ) {
				a[n][h] = 0;
				if(h != 0) {
					n++;
					h = 0;
				}
			} else {
				a[n][h++] = c[i];
			}
		}
		a[n][h] = 0;
		printf("Test %d: ", i);
		for(int i = 0; i <= n; i++) {
			if(check(a[i], d)) {
				printf("%s ", a[i]);
			}
		}
		printf("\n");
	}
}