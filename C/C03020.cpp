#include<stdio.h>
#include<math.h>
#define ll long long

int tn(int n){
	int lat = 0, tmp = n;
	while(n != 0){
		lat = lat * 10 + n % 10;
		n /= 10;
	}
	return tmp == lat;
}

int tongcs(int n){
	int sum = 0; 
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	while(sum != 0){ // Check each digit of the sum
		int m = sum % 10;
		if(m == 8)
			return 1;
		sum /= 10;
	}
	return 0;
}

int chuso(int n){
	int r;
	while(n != 0){
		r = n % 10;
		if(r == 6){
			return 1;
		}
		n /= 10;
	} 
	return 0;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int dem = 0;
	if(a > b){
		int c = a;
		a = b;
		b = c;
	}
	for(int i = a ; i <= b; i++){
		if(chuso(i) & tn(i) & tongcs(i)){
			printf("%d ", i);
		}
	}
	
}