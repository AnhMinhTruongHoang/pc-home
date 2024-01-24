 #include <stdio.h>
#include <string.h>
#define MAX 1000

int main(){

    char str[MAX];
    printf("nhap: ");
    gets(str);

    int i;
    int count=0;

    for (i=0; i < strlen(str); i++){
        if(str[i]=='b'){
            count++;
        }

    }
    printf("res:%d", count);
    return count;

}
