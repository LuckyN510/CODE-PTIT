#include<stdio.h>


int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(c > a && d > b){
		int canh1 = c - a;
		int canh2 = d - b;
		if(canh1 == canh2) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
	printf("\n");
	return 0;
}