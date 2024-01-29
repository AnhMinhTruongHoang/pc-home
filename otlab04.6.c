#include <stdio.h>


const char* doc_so(int n) {
    const char* so_chu_so[] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
    
    if (n < 0 || n > 9) {
        return "So không nam trong khoang tu 0 den 9";
    }

    return so_chu_so[n];
}

int main() {
    int so;
    printf("Nhap vào so tu 0 den 9: ");
    scanf("%d", &so);

   
    printf("Cach doc so %d là: %s\n", so, doc_so(so));

    return 0;
}
