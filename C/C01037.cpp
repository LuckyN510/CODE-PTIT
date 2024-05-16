#include<stdio.h>
#include<math.h>

int main() {
	int n,m;
	scanf("%d%d", &n,&m);
	long long sum = 0;
	if(n > m) {
		int tmp = n;
		n = m;
		m = tmp;
	} 
	
	for(int i = n; i <= m; i++) {
			sum +=i;
		}

	printf("%lld", sum);
	return 0;
}