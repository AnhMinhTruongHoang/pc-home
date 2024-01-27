//#include <stdio.h>
//#define MAX 1000
//
//int chuoiThuBa (int arr[MAX]){
//	int i,j;
//	int n=0;
//	int length = MAX;
//	
//	for(i=0,j= length-1;i<j;i++,j--){
//		n=arr[i]+arr[j];
//	}
//	
//	
//	
//	 return n;
//	
//}
//
// 
// 
//int main() {
//	
//	int arr[MAX];
//	int i,kq;
//	
//	printf("Nhap mang (toi da %d phan tu): ", MAX);
//    for (i = 0; i < MAX; i++) {
//        if (scanf("%d", &arr[i]) != 1) {
//            break;
//        }
//    }
//
//    int length = i; 
//
//    kq = chuoiThuBa(arr);
//    printf("Tong cua phan tu thu ba la: %d\n", kq);
//
//    return 0;
//}
//	


#include <stdio.h>
#define MAX 1000

void noiChuoi(char arr1[MAX], char arr2[MAX], char ketQua[MAX]) {
    int i, j;

    
    for (i = 0; i<arr1[i]; i++) {
        ketQua[i] = arr1[i];
    }

    for (j = 0; j<arr2[j]; j++) {
        ketQua[i + j] = arr2[j];
    }

    
    ketQua[i + j] = '\0';
}

int main() {
    char chuoi1[MAX], chuoi2[MAX], ketQua[2 * MAX];

    
    printf("Nhap chuoi thu nhat: ");
    fgets(chuoi1, MAX, stdin);

    
    printf("Nhap chuoi thu hai: ");
    fgets(chuoi2, MAX, stdin);

   
    noiChuoi(chuoi1, chuoi2, ketQua);

   
    printf("Chuoi sau khi noi: %s\n", ketQua);

    return 0;
}

    
    
    

