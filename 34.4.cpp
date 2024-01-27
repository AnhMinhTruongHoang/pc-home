#include <stdio.h>
#include <string.h>
#define MAX 1000

int demSoTuTrongChuoi(char str[]){
    int i, count = 0;
    int soTu = 0;

    for (i = 0; i < strlen(str); i++){
        if (str[i] == ' '){
            soTu = 0;
        } else {
            if (soTu == 0){
                soTu = 1;
                count++;
            }
        }
    }
    return count;
}
int main(){
    char str[MAX];
    printf("Nhap chuoi: ");
    gets(str);
    
    int kq = demSoTuTrongChuoi(str);

    printf("Ket qua: %d\n", kq);

    return 0;
}

