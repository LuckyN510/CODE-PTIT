#include <stdio.h>
#include <math.h>

#define ll long long

int gcd(ll a, ll b) {
    while (b > 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b); 
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll a, b;
        scanf("%lld%lld", &a, &b);
        printf("%lld %lld\n", lcm(a, b), gcd(a, b)); 
    }
    return 0;
}