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
   //q
  
   		for (i = 0; i <= 4; i++) {
   		 int soNguyenTo = 1; 
   		 int V;
 
      	for ( V = 2; V * V <= mg1[i]; V++) {
           if (mg1[i] % V == 0) {
              soNguyenTo = 0;  
               break;
          }
      }
     		printf("\nCau P:So nguyen to trong mang la: ");
      	if (soNguyenTo && mg1[i] > 1) {  
          		printf("%d ", mg1[i]);
          			count++;
     }
   }

 
 printf("\nTong so cac so nguyen to trong mang la: %d", count);

 
    //s
    
	int soChanDauTien = 0;
	for (i = 0; i <= 3; i++) {  
    if (i > 0 && i % 2 == 0) {
        soChanDauTien = i;
        break;
        printf("\n cau s: vi tri chan dau tien trong mang:%d",soChanDauTien );
    	}
    	else{
		printf("\n -1");
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
    
    int kiemTraTinhDoiXung = 1;  

for (i = 0; i < 5 / 2; i++) {
    if (mg1[i] != mg1[4 - i]) {
        kiemTraTinhDoiXung = 1; 
        break;  
    }
}
	printf("\n cau U: mang doi xung qua duong cheo chinh");
	for (i = 0; i < 5 / 2; i++){
	
		if (kiemTraTinhDoiXung == 1) {
		
	} 
		else {
    		printf("\n cau U: -1\n");
	}
}


//v

   int mang[] = {2,4,6,2,3,7,8,9};// 8 phan tu
	int n = 9;// do day cua mang
	int k, l;
	int soLanXuatHien;
	for(k = 0; k < n - 1; k++){
		soLanXuatHien = 0;// dat gia tri ban dau cho so lan xuat hien
		for(l = k + 1; l < n; l++){
			if(mang[k] == mang[k]){
				soLanXuatHien = soLanXuatHien + 1;
			}
		}
		if(soLanXuatHien = soLanXuatHien + 1){
			printf("Cau V: So lan xuat hien cua %d la %d\n", mang[k], soLanXuatHien);
		}
	}
	
	//x
	
	
	int I,J; 
	int arr[] = {1,2,3,4,5,6};
    int N = sizeof(arr) / sizeof(arr[0]);
    int true;
    int false;
            
            
            int mangTangDan = true;
            for( I=0; I < N; I++){
            	for(J = J + 1; J < N; J++){
            		if(arr[I] > arr[J]){
            		mangTangDan = false;
            		break;
				    }
				}
			}
			if(mangTangDan == true){
				printf("\n cau X:La mang tang dan");
			}
			else{
				printf("Khong phai mang tang dan");
			}
		
	
	    
	    
	 
	 
	//Y
	int G,H;
	int mang3[] = {6,5,4,3,2,1};
    int C = sizeof(arr) / sizeof(arr[0]);       
    int MTD = true;
    
            for(G= 0; G < C; G++){
            	for(H = G + 1; H < C; H++){
            		if(mang3[G] < mang3[H]){
            		MTD = false;
            		break;
				    }
				}
			}
			if(MTD == true){
				printf("\n cau Y:La mang giam dan");
			}
			else{
				printf("\n cau Y: Khong phai mang giam dan");
			}
			
			
			//Z
			
			int soChinhPhuong(int num) {
				    int canBac2 = sqrt(num);
				    return (canBac2 * canBac2 == num);
				}
				    int mang4[] = {9, 6, 5, 2, 6, 76, 3, 5, 16, 243, 6, 4};
				    int t = sizeof(mang4) / sizeof(mang4[0]);
				    printf("\n cau Z: Cac so chinh phuong trong mang la: ");
				
				    for (i = 0; i < t; i++) {
				        if (soChinhPhuong(mang4[i])) {
				            printf("%d ", mang4[i]);
				        }
				    }
			

    return 0;
}
