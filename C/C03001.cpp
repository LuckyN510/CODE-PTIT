#include<stdio.h>
#include<math.h>

int chiahet(int n) {
	int sum = 0;
	while(n != 0){
		int tmp = n % 10;
		n /= 10;
		sum += tmp;
	}
	
	if(sum % 10 == 0){
	 return 1;
	}
	else{
	 return 0;
	}

}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		if(chiahet(n) == 1) {
			printf("YES\n");
		} 
		else {
			printf("NO\n");
		}
	}
	printf("\n");
	return 0;
}