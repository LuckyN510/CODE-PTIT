#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int cmp(const void* a,const void* b){
	int* x=(int *)a;
	int* y=(int *)b;
	return *x-*y;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	
	qsort(a,n,sizeof(int),cmp);
	qsort(b,m,sizeof(int),cmp);
	
	for(int i=0;i<n;i++){
		while(a[i]==a[i+1]){
			i++;
		}
		for(int j=0;j<m;j++){
			while(b[j]==b[j+1]){
				j++;
			}
			if(a[i]==b[j]){
				printf("%d ",a[i]);
				break;
			}
		}
		
	}
	printf("\n");
	

	for(int i=0;i<n;i++){
		int ok=0;
		while(a[i]==a[i+1]){
			i++;
		}
		
		for(int j=0;j<m;j++){
			if(a[i]==b[j]){
				ok=1;break;
			}
		}
		if(ok==0){
			printf("%d ",a[i]);
		}
	}
	printf("\n");

	for(int j=0;j<m;j++){
		int res=0;
		while(b[j]==b[j+1]){
			j++;
		}
		for(int i=0;i<n;i++){
			if(b[j]==a[i]){
				res=1;break;
			}
		}
		if(res==0){
			printf("%d ",b[j]);
		}
	}
	
}