#include <stdio.h>


const char* doc_so(int n) {
    const char* so_chu_so[] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
    
    if (n < 0 || n > 9) {
        return "So kh�ng nam trong khoang tu 0 den 9";
    }

    return so_chu_so[n];
}

int main() {
    int so;
    printf("Nhap v�o so tu 0 den 9: ");
    scanf("%d", &so);

   
    printf("Cach doc so %d l�: %s\n", so, doc_so(so));

    return 0;
}
