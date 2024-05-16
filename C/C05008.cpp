#include<stdio.h>
#include<math.h>

int main() {
	int t; scanf("%d", &t);
	for(int i = 1; i <= t; i++){
	
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m], b[n][m], c[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    int max = -1e9, hang, cot;
    for(int i = 0; i < n; i++) {
        sum = 0; 
        for(int j = 0; j < m; j++) {
            sum += a[i][j];
        }
        if(sum > max) {
            max = sum;
            hang = i;
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i != hang) {
                b[i][j] = a[i][j];
            }
        }
    }
    max = -1e9;
    for(int j = 0; j < m; j++) { 
        sum = 0;
        for(int i = 0; i < n; i++) {
            if(i != hang) {
                sum += b[i][j];
            }
        }
        if(sum > max) {
            max = sum;
            cot = j;
        }
    }
    printf("Test %d:\n", i);
    for(int i = 0; i < n; i++) {
        if(i != hang) {
            for(int j = 0; j < m; j++) {
                if(j != cot) {
                    printf("%d ", b[i][j]);
                }
            }
            printf("\n");
        }
    }
}
    return 0;
}