
float f(int x) {
    return 3 * x * x + 4 * x + (6 % 2) * x;
}

int main() {
    int x;
    printf("Nhap so nguyen: ");
    scanf("%d", &x);

    float f = f(x);
    printf("Gia tri bieu thuc la: %.2f\n", f);

    return 0;
}
