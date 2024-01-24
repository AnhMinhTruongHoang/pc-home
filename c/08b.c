int main() {
    char b;
    printf("nhap ky tu:");
    scanf("%c", &b);

    if (b >= 'A' && b <= 'Z') {
        printf("la ky tu in hoa: %c", b);
    }
    else if (b >= 'a' && b <= 'z') {
        printf("la ky tu thuong: %c", b);
    }
    else {
        printf("la ky tu khac: %c", b);
    }

    return 0;
}
