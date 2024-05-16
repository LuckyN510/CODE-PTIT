#include<stdio.h>
#include<math.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {

		int n;
		scanf("%d", &n);
		int a[n], f = 0, cnt[100001] = {0};
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			cnt[a[i]]++;
			if(cnt[a[i]] > f) {
				f = cnt[a[i]];
			}
		}
		for(int i = 0; i < n; i++) {
			if(cnt[a[i]] == f) {
				printf("%d ", a[i]);
				cnt[a[i]] = 0;
			}
		}
		printf("\n");
	}

}