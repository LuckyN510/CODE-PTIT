#include<stdio.h>
#include<math.h>

#define ll long long
ll max(ll a){
	ll ans = a;
	int cnt = 0;
	while(a != 0){
		if(a % 10 == 5){
			ans +=(ll)pow(10, cnt); 
		}
		a /= 10;
		++cnt;
	}	
	return ans;
}

ll min(ll a){
	ll ans = a;
	int cnt = 0;
	while(a != 0){
		if(a % 10 == 6){
			ans -=(ll)pow(10, cnt);
		}
		a /= 10;
		++cnt;
	}
	return ans;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll a,b;	scanf("%lld%lld", &a, &b);
		printf("%lld %lld\n", min(a)+min(b), max(a) + max(b));
	}
	printf("\n");
}