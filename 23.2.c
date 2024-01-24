#include <stdio.h>
#include <string.h>
#define MAX 1000

void daoNguocMang(char str[MAX]) {
    int i, j;
    char temp;

    for (i = 0, j = strlen(str) - 2; i < j; i++, j--) {  
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[MAX];
    printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);

    daoNguocMang(str);
    printf("Mang dao nguoc la: %s", str);

    return 0;
}

