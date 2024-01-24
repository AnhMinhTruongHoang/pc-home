//#include<stdio.h>
//
//int snt(int i){
//	if (i>1 && i%1 && i%i){  
//	    printf("\n1 %d",i);
//			
//	}
//	else{;
//		printf("\n 0");
//	}
//	return 0;
//}
//	
//	
//
//int main(){
//	
//	int i;
//	printf("nhap i:");
//    scanf("%d", &i);
//    
//    int SNT= snt(i);
//    
//    
//    return 0;
//    
//
//}

//b
#include <stdio.h>

int is_prime(int n) {
   
    if (n <= 1) {
        return 0;
    }

    
    for (int i = 2; i * i <= n; i++) {
        
        if (n % i == 0) {
            return 0;
        }
    }

   
    return 1;
}


int main() {
    int n;
    printf("Nh?p vào s? n: ");
    scanf("%d", &n);

    int is_prime_number = is_prime(n);
    
    if (is_prime_number == 1) {
        printf("%d là s? nguyên t?\n", n);
    } else {
        printf("%d không ph?i là s? nguyên t?\n", n);
    }

    return 0;
}




