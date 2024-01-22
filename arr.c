#include <stdio.h>

int main() {
  // Khai báo bi?n
  int arr[5];
  int i, j;

  // Nh?p các s? vào m?ng
  for (i = 0; i < 5; i++) {
    printf("Nh?p s? th? %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // In m?ng ban d?u
  printf("M?ng ban d?u: \n");
  for (i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  // Ð?o ngu?c m?ng
  for (i = 0; i < 5 / 2; i++) {
    j = 5 - i - 1;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  // In m?ng d?o ngu?c
  printf("\nM?ng d?o ngu?c: \n");
  for (i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
