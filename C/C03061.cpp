#include <stdio.h>
#include <string.h>


int check(char c[]) {
	int n = strlen(c);
	if (c[0] - '0' != 2 * (c[n - 1] - '0') && 2 * (c[0] - '0') != c[n - 1] - '0') {
		return 0;
	}
	for (int i = 1; i <= (n - 2) / 2; i++) {
		if (c[i] != c[n - i - 1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		char c[100];
		scanf("%s", c);
		if (check(c))
			printf("YES\n");
		else
			printf("NO\n");
	}
}