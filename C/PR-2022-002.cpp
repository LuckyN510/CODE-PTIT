#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n > 1;
}
int check(int n) {
    int count = 0, temp = n;
    while (temp) {
        count++;
        temp /= 10;
    }
    int num = n;
    while (nt(num)) {
        int rem = num % 10;
        int div = num / 10;
        num = (pow(10, count - 1)) * rem + div;
        if (num == n) return 1;
    }
    return 0;
}

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        int n;
        scanf("%d", &n); 
        printf("%d ", check(n)); 
    }
    return 0;
}