#include<stdio.h>
#include<math.h>

int nt(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return n > 1;
}
int check1(int n) {
	int r = 0;
	while(n != 0) {
		r = n % 10;
		if(!nt(r)){
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int check2(int n) {
	int sum = 0;
	while(n != 0) {
		sum += n % 10;
		n /= 10;
	}
	if(nt(sum)) {
		return 1;
	}
	return 0;
}
void check3(int a, int b){
	int cnt = 0;
	for(int i = a; i <= b; i++){
		if(check1(i) && nt(i) && check2(i)){
			++cnt;
		}
	}
	printf("%d", cnt);
	
}
int main() {
    int t; scanf("%d", &t);
    while(t--){
	int a, b;
	scanf("%d%d", &a, &b);
	int cnt = 0;
	check3(a, b);
	printf("\n");
    }
}