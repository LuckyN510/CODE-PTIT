#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
/*
5
Pidgey
12 36
Ivysaur
10 63
Charmander
35 96
Pikachu
12 32
Squirtle
15 10
*/
struct pokemon {
	char ten[100];
	int canth;
	int daco;
	int cnt;

};
typedef struct pokemon pokemon;
int main() {
	int n;
	scanf("%d", &n);
	pokemon a[n];
	int sum = 0, max = -1e9;
	for(int i = 0; i < n; i++) {
		getchar();
		gets(a[i].ten);
		scanf("%d%d", &a[i].canth, &a[i].daco);
		a[i].cnt = 0;
		while(a[i].canth <= a[i].daco) {
			a[i].daco = a[i].daco - a[i].canth;
			a[i].daco += 2;
			a[i].cnt++;
		}
		sum += a[i].cnt;
	}
	printf("%d\n", sum);
	for(int i = 0; i < n; i++) {
		if(a[i].cnt > max){
			max = a[i].cnt;
		}
	}
	for(int i = 0; i < n; i++) {
		if(a[i].cnt == max){
			printf("%s\n", a[i].ten);
			break;
		}
	}
}