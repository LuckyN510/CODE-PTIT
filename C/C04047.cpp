#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct tg{
	int bd;
	int sothoigian;
};
typedef struct tg tg;

tg a[100],tmp;

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d %d", &a[i].bd, &a[i].sothoigian);
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i].bd > a[j].bd){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(a[i].bd > sum){
			sum = a[i].bd + a[i].sothoigian;
		}
		else{
			sum += a[i].sothoigian;
		}
	}
	printf("%d", sum);
}