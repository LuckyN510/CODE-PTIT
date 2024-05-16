#include<stdio.h>
#include<math.h>
#define ll long long

int nt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return n > 1;
}

int Fibo(int n) {
    if (n == 0 || n == 1) return 1;
    int f1 = 1, f2 = 0;
    for (int i = 2; i <= 93; i++) { 
        int fn = f1 + f2;
        if (fn == n) return 1;
        f2 = f1;
        f1 = fn;
    }
    return 0;
}

int check(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    if (Fibo(sum) == 1) {
        return 1;
    }
    return 0;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > b){
		int c=a;
		a=b;
		b=c;
	}
    for (int i = a; i <= b; i++) {
        if (check(i) && nt(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}