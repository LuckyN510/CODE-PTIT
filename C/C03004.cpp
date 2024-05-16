#include <stdio.h>
#include <math.h>

#define ll long long

int gcd(ll a, ll b) {
    while(b > 0) {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ll a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n%lld", gcd(a, b), lcm(a, b));
    return 0;
}