#include<stdlib.h>
#include<string.h>
#include<stdio.h>
//Hàm đảo ngược mảng
void dao(int c[], int n){
	int l=0, r=n-1;//l: can trai, r: can phai
	while(l<r){
		int tmp=c[l];
		c[l]=c[r];
		c[r]=tmp;
		l++;
		r--;
	}
}

int main(){
	char x[500];
	scanf("%s", x);
	//Copy xâu x ra mảng res; Mảng res chính là xâu tổng mỗi lần cộng 2 nửa
	int res[500]; int res_len = strlen(x);
	for(int i = 0;i<strlen(x);i++) res[i] = x[i] - '0';
	
	while (res_len > 1) {
        // Chia mảng res thành hai nửa
        int half1[250], half2[250];
        int half1_len = res_len / 2;
        int half2_len = res_len - res_len / 2;
        
        //Tạo 2 nửa mảng (Nửa 1 bao giờ cũng sẽ bé hơn nửa 2)
        for (int i = 0; i < half1_len; i++) half1[i] = res[i];
        for (int i = 0; i < half2_len; i++) half2[i] = res[i + half1_len];
    	
        //Thực hiện phép cộng 2 nửa này
        //1. Lật ngược 2 nửa này
    	dao(half1, half1_len); dao(half2, half2_len);

    	//2. Reset lại mảng res (Tổng 2 nửa)
    	memset(res, 0, sizeof(res));
    	res_len = 0;
    	
    	//3. Tính tổng trên 2 mảng half1, half2
    	//Thêm số 0 vào sau nửa 1 để nửa 1 dài ngang nửa 2 
    	for(int i = half1_len;i<half2_len;i++) half1[i] = 0;
    	
    	//Tính tổng
    	int tmp, nho = 0;
	    for(int i=0;i<half2_len;i++){
	        tmp = half1[i]+half2[i]+nho;
	        
	        //Đẩy chữ số hàng đơn vị khi cộng cột đang xét vào mảng kết quả
	        res[res_len]=tmp%10;
	        res_len++;
	        
	        //Tính số nhớ
	        nho=tmp/10;
	    }
	    if(nho){
	    	res[res_len]=nho;
	    	res_len++;
		}
    	
    	//In ra mảng res đảo ngược
    	dao(res, res_len);
    	for(int i = 0;i<res_len;i++) printf("%d", res[i]);
    	printf("\n");
    }
    return 0;
}