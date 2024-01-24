#include<stdio.h>

int main(){
	int mg1[5];
	int i;
	for (i=0;i<=4;i++){
	printf("nhap thu tu mang %d:",i);
	scanf("%d", &mg1[i]);

}
     //b
    for (i=0;i<=4;i++){
    	printf("%d \n", mg1[i]);
    
    }

    
    
//    //c 
//    int x;
//    int count=0;
//	printf("Nhap phan tu x can chen: ");
//    scanf("%d", &x);
//    
//    for (i = 0; i <= 4; i++){
//    	 if (mg1[i] == x){
//    	 	count++;
//    	
//		 }
//    }
//    
//     printf("\n so phan tu x la : %d \n",count);
//     
     //d
     int tong= 0;
     for(i=0;i<=4;i++){
     	tong+=mg1[i];
     	
     }
     printf("tong mang:%d \n", tong);
     
     //e
     
     
    float tbc= tong/5;
    printf("tbc:%.2f ", tbc);
    
    //f
    
    int max=mg1[0];
     for(i=0;i<=4;i++){
     
	     if(max<=mg1[i]){
	     	max=mg1[i];
	     	
	     }
	     
     	
     }
     printf("gia tri lon nhat:%d \n", max);
     
     //min
     int vitri;
       int min=mg1[0];
     for(i=0;i<=4;i++){
     
	     if(min>=mg1[i]){
	     	min=mg1[i];
	     	vitri=i;
	     	
	     }
	     
     	
     }
     printf("gia tri nho nhat:%d \n", min);
     printf("vi tri min: %d\n",vitri);
     
     //d
     
     int tongc=0;
     for(i=0;i<=4;i++){
     
	     if(mg1[i]%2==0){
	     	 tongc+=mg1[i];
	     	
	     }
	     
     }
     printf("tong chan la :%d",tongc);
     
     //e
     
     
     int tongl=0;
     for(i=0;i<=4;i++){
     
	     if(mg1[i]%2!=0){
	     	 tongl+=mg1[i];
	     	
	     }
	     
 	}
     printf("\ntong le la :%d",tongl);
     
     //j
     
     int maxC=0;
     int demChan=0;									

     for(i=0;i<=4;i++){
     
	     if(mg1[i]%2==0){
			demChan++;
			if(maxC<= mg1[i]){
				maxC=mg1[i];
			}
			
	     }
	     

     }
     if(demChan==0){
     	printf("\n-1");
     }
     else{
     	printf("\nso chan lon nhat: %d", maxC);
     }
     
    //k
    
    int maxl=0;
     int demLe=0;									

     for(i=0;i<=4;i++){
     
	     if(mg1[i]%2!=0){
			demLe++;
			if(maxl<= mg1[i]){
				maxl=mg1[i];
			}
			
	     }
	     

     }
     if(demLe==0){
     	printf("\n-1");
     }
     else{
     	printf("\nso chan le nhat: %d", maxl);
     }
     //l
    
//     int x;
//   	
//	 printf("\nNhap phan tu x can chen: ");
//     scanf("%d", &x);
//     
//     for(i=0;i<=4;i++){
//     	
//     	if(mg1[i]==x){
//     		printf("vi tri la:%d     ", i);
//     	}
//     	
//    
//     }
     int ptd=0;									
     
	 for(i=0;i<=4;i++){
     
	     if(mg1[i]> 0){
			ptd++;
		
	     }
	    
     }
     printf("\nphan tu duong: %d", ptd);
     //2
     
     for(i=0;i<=5;i++){
     	if (i%2==0){
     		printf("\nvi  tri chan trong mang:%d  ",i);
     	}
     	
     }
     
     
	 
	 
     
     
     
   
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    
    
     
     
     
     
     
    

     
     
     
    
    return 0;
}
