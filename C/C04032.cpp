#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct tn{
	int so;
	int cnt;
}tn;
int check(int n){
	while(n>=10){
		int r=n%10;
		if(r<(n/10)%10) return 0;
		n/=10;
	}
	return 1;
	
}

int cmp(const void* a,const void* b){
	tn *x=(tn*)a;
	tn *y=(tn*)b;
	return y->cnt - x->cnt;
}
int find(tn d[],int n,int x){
	for(int i=0;i<n;i++){
		if(d[i].so==x){
			return i;
		}
	}
	return -1;
}
int main(){
	tn d[100001];
	int n=0;
	int x;
	while(scanf("%d",&x)!=-1){
		if(check(x)){
			int dex=find(d,n,x);
			if(dex!=-1){
				d[dex].cnt+=1;
			}
			else {
				d[n].so=x;
				d[n].cnt=1;
				++n;
			}
		}
	}
	qsort(d,n,sizeof(tn),cmp);
	for(int i=0;i<n;i++){
		printf("%d %d\n",d[i].so,d[i].cnt);
	}
}