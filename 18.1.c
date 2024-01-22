 #include <stdio.h>

int tong(int a,int b){
	
	return a+b;
}

int hieu(int a,int b){
	
	return a-b;
}
int tich(int a,int b){
	
	return a*b;
}
float thuong(int a,int b){
	
	return (float)a/b;
}
int sodu(int a,int b){
	
	return a%b;

}
	

    

int main(){
	int a;
	printf("nhap a:");
    scanf("%d", &a);
    
	int b;
	printf("nhap b:");
	scanf("%d", &b);
	
	int t=tong(a,b);
    int h=hieu(a,b);
    int ti=tich(a,b);
    float th=thuong(a,b);
    int sd=sodu(a,b);
  
   printf("kq: %d - %d - %d- %.2f - %d",t,h,ti,th,sd);
  
    
    return 0;
}


 
 
