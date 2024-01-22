#include<stdio.h>
//a
int main(){
	int mg1[5];
	int i;
	for (i=0;i<=4;i++){
	printf("nhap thu tu mang %d:",i);
	scanf("%d", &mg1[i]);

}
     //b
    for (i=0;i<=4;i++){
    	printf("\nb duyet mang: %d \n", mg1[i]);
    
    }

    
    
    //c 
    int z;
    int count=0;
	printf("\ncau c: Nhap phan tu x can chen: ");
    scanf("%d", &z);
    
    for (i = 0; i <= 4; i++){
    	 if (mg1[i] == z){
    	 	count++;
    	
		 }
    }
    
     printf("\nso phan tu x la: %d\n ",count);
     
     //d
     int tong= 0;
     for(i=0;i<=4;i++){
     	tong+=mg1[i];
     	
     }
     printf("\ncau d:tong mang:%d", tong);
     
     //e
     
     
    float tbc= tong/5;
    printf("\ncau e: tbc la:%.2f\n", tbc);
    
    //f+g+vi tri
    int vitrimax;
    int max=mg1[0];
     for(i=0;i<=4;i++){
     
	     if(max<=mg1[i]){
	     	max=mg1[i];
	     	vitrimax=i;
	     	
	     	
	     }
	     
     	
     }
     printf("\nmax + vi tri\n");
     printf("\ngia tri lon nhat:%d", max);
     printf("\nvi tri max: %d\n",vitrimax);
     
     //min + vi tri
     int vitrimin;
       int min=mg1[0];
     for(i=0;i<=4;i++){
     
	     if(min>=mg1[i]){
	     	min=mg1[i];
	     	vitrimin=i;
	     	
	     }
	     
     	
     }
     printf("\nmin + vi tri\n");
     
	 printf("\ngia tri nho nhat:%d", min);
     printf("\nvi tri min: %d\n",vitrimin);
     
     //d
     
     int tongc=0;
     for(i=0;i<=4;i++){
     
	     if(mg1[i]%2==0){
	     	 tongc+=mg1[i];
	     	
	     }
	     
     }
     printf("\n cau h: tong chan la :%d",tongc);
     
     //e
     
     
     int tongl=0;
     for(i=0;i<=4;i++){
     
	     if(mg1[i]%2!=0){
	     	 tongl+=mg1[i];
	     	
	     }
	     
 	}
     printf("\n cau i: tong le la :%d",tongl);
     
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
     	printf("\n cau j: so chan lon nhat: %d", maxC);
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
     	printf("\cau k:n-1");
     }
     else{
     	printf("\n cau k: so le lon nhat: %d\n", maxl);
     }
     //l
    
     int x;
   	
	 printf("\ncau m:Nhap phan tu x can chen:");
     scanf("%d", &x);
     
     for(i=0;i<=4;i++){
     	
     	if(mg1[i]==x){
     		printf("vi tri la:%d     ", i);
     	}
     	
    
     }
     int ptd=0;									
     
	 for(i=0;i<=4;i++){
     
	     if(mg1[i]> 0){
			ptd++;
		
	     }
	    
     }
     printf("\n cau l: phan tu duong: %d", ptd);
     //r
     
     for(i=0;i<=5;i++){
     	if (i%2==0){
     		printf("\n cau r: vi  tri chan trong mang:%d  ",i);
     	}
     	
     }
//     //p
//     
//     
//    
//   	for (i = 0; i <= 4; i++) {
//     int isPrime = 1;  
//       for (int j = 2; j * j <= mg1[i]; j++) {
//           if (mg1[i] % j == 0) {
//               isPrime = 0;  
//               break;
//           }
//       }
//       printf("\n\nSo nguyen to trong mang la: ");
//       if (isPrime && mg1[i] > 1) {  
//           printf("%d ", mg1[i]);
//           count++;
//       }
//   }
//
// 
//   printf("\nTong so cac so nguyen to trong mang la: %d", count);

 
    //s
    
	int soChanDauTien = 0;
	for (i = 0; i <= 3; i++) {  
    if (i > 0 && i % 2 == 0) {
        soChanDauTien = i;
        break;
        printf("\n cau s: vi tri chan dau tien trong mang:%d", soChanDauTien);
    	}
    	else{
		printf("\ncau s:-1");
	}
	}
	//t
	
  
  for (i = 4;i>=0;i--) {
  	printf("%d", mg1[i]);
	
  }
  	printf("\ncau t:mang dao nguoc:");  
    for (i = 3; i >=0; i--) {  
        printf("%d ", mg1[i]);
    }
    //u
    
    int tinhdoixung;
    
    for (i = 0; i < 4 / 2; i++) {
    if (mg1[i] != mg1[4 - i - 1]) {
      return -1;
    }
  }
  

    
    
    
    
    
    
  
  
  

	
	
	
	
	
	
	

	
	
	
	
	
	
	
    
    
    
   	 

     
     

 
     
    
    	
	
	 
     
     
     
   
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    
    
     
     
     
     
     
    

     
     
     
    
    return 0;
}
