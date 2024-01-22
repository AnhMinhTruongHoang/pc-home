 #include <stdio.h>

int main(){
	
	int n;
	printf("nhap mot so:");
	scanf("%d", &n);
	
	int i=1;
	
	for(i=1;i<=10;i++){
		int tich =n*i;
		printf("%d * %d = %d  \n " ,n,i,i*n);
	}
    return 0;
    }
 
 
