#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    
    printf("Nhap so giay: ");
    scanf("%d", &totalSeconds);

    
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Thoi gian quy doi la: %d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
