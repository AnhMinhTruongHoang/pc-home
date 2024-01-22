
// Hàm in ra b?ng c?u chuong c?a 1 s? n
void in_bang_cuu_chuong(int n) {
    // Vòng l?p for d? duy?t t? 1 d?n 9
    for (int i = 1; i <= 9; i++) {
        // In ra k?t qu? phép nhân
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

// Hàm chính
int main() {
    // Nh?p vào s? n
    int n;
    printf("Nh?p vào s? n: ");
    scanf("%d", &n);

    // G?i hàm in_bang_cuu_chuong()
    in_bang_cuu_chuong(n);

    return 0;
