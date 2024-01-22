#include<stdio.h>

int bcc(int n,int i){
	for (i>0;i<=9;i++){
		printf("%d*%d = %d\n",n,i, n*i);
		
	}
	return 0;
}
	
	

int main(){
	
	int n;
	printf("nhap n:");
    scanf("%d", &n);
    
    int i=1;
    
    
    int BCC= bcc(n,i);

    return 0;
    

}
