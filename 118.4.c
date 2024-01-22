 #include <stdio.h>
int thamSo(int n){
	int s=0;
	while (n!=0){
		n/=10;
		s++;
		
	}
	
	
	return s;
}


int main(){
	int x,y;
	printf("nhap 2 so :");
    scanf("%d%d", &x,&y);
    
     
	printf("kq: %d", thamSo(x));
    printf("kq: %d", thamSo(y));
	
    
    
    return 0;
}
 
 
