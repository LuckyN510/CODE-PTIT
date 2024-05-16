#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int chan = 0, le = 0;
	while( n != 0){
		if(n % 2 == 0){
		++chan;
		n /= 10;
		}
		else{
		++le;
		n /= 10;
		}
	}
	printf("%d %d", le, chan);
	return 0;
}