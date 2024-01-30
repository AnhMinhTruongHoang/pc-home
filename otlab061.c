#include <stdio.h>
#include <string.h>

//int main() {
//    int n = 5;
//    int i,j;
//
//    
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("%d", j);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//b

//int main() {
//    char n = 5;
//    int i,j;
//
//    
//    for (i = n; i >= 1; i--) {
//        for (j = 1; j <= i; j++) {
//            printf("%d", j);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


int main() {
    char n=7;
    int i,j;

    
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


