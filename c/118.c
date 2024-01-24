 #include <stdio.h>
 

int soNguyen(int a,int b){
	
	return a>b?a:b;
}

	
int main(){
int a;
	printf("nhap a:");
    scanf("%d", &a);
    
	int b;
	printf("nhap b:");
	scanf("%d", &b);
	
	int kq=soNguyen(a,b);
	
	printf("kq: %d", kq);
    
	
	
	return 0;
    
}
 
 
