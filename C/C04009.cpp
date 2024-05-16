#include<stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int chan[100], le[100];
	int demchan = 0, demle = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] % 2 == 0) {
			chan[demchan] =a[i];
			demchan++;
		} else {
			le[demle] = a[i];
			demle++;
		}
	}
	for(int i = 0; i < demchan; i++) {
		printf("%d ", chan[i]);
	}
	printf("\n");
	for(int i = 0; i < demle ; i++) {
		printf("%d ", le[i]);
	}
	printf("\n");
}