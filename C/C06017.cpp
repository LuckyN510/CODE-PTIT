#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int comp(const void*a, const void*b) {
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x, y);
}
int main() {
	char c[1000], d[1000];
	gets(c);
	gets(d);
	int n = 0, m = 0;
	char a[1000][100], b[1000][100];
	char *token = strtok(c," ");
	while(token != NULL) {
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	token = strtok(d, " ");
	while(token != NULL) {
		strcpy(b[m], token);
		++m;
		token = strtok(NULL, " ");
	}
	qsort(a, n, sizeof(a[0]), comp);
	for(int i = 0; i < n; i++) {
		while(strcmp(a[i], a[i + 1]) == 0)
			++i;
		int check = 0;
		for(int j = 0; j < m; j++) {
			if(strcmp(a[i], b[j]) == 0) {
				check = 1;
				break;
			}
		}
		if(!check)
			printf("%s ", a[i]);
	}
	printf("\n");
}

