
// H�m in ra b?ng c?u chuong c?a 1 s? n
void in_bang_cuu_chuong(int n) {
    // V�ng l?p for d? duy?t t? 1 d?n 9
    for (int i = 1; i <= 9; i++) {
        // In ra k?t qu? ph�p nh�n
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

// H�m ch�nh
int main() {
    // Nh?p v�o s? n
    int n;
    printf("Nh?p v�o s? n: ");
    scanf("%d", &n);

    // G?i h�m in_bang_cuu_chuong()
    in_bang_cuu_chuong(n);

    return 0;
