#include<stdio.h>
#include<math.h>
#define ll long long
int fibo(ll n){
    if (n == 0 || n == 1)
        return 1;
    ll f1 = 1, f2 = 0;
    while (f1 <= n) {
        if (f1 == n)
            return 1;
        ll fn = f1 + f2;
        f2 = f1;
        f1 = fn;
    }
    return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
	ll n;
	scanf("%lld", &n);
	if(fibo(n)){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
}