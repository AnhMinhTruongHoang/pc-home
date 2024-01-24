#include <stdio.h>

#define MAX 1000

int countCharacter(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char str[MAX];
    printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);  // Use fgets for safer input

    int count = countCharacter(str);  // Call the function to count characters
    printf("Do dai mang la: %d\n", count);  // Print the result

    return 0;
}

