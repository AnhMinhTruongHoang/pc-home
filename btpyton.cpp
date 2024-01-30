def hien_thi_ngon_ngu_lap_trinh(ky_tu):
    ky_tu = ky_tu.lower()  # Chuy?n d?i ký t? nh?p vào thành ch? thu?ng d? so sánh d? dàng
    
    ngon_ngu = {
        'a': 'Ada',
        'b': 'Basic',
        'c': 'COBOL',
        'd': 'dBASE III',
        'f': 'Fortran',
        'p': 'Pascal',
        'v': 'Visual C++'
    }

    if ky_tu in ngon_ngu:
        print(f"Ngôn ng? l?p trình tuong ?ng v?i {ky_tu.upper()} là: {ngon_ngu[ky_tu]}")
    else:
        print(f"Không có ngôn ng? l?p trình tuong ?ng v?i ký t? {ky_tu.upper()}")

# Nh?p ký t? t? ngu?i dùng
ky_tu_nhap = input("Nh?p m?t ký t? trong b?ng ch? cái: ")

# G?i hàm và hi?n th? k?t qu?
hien_thi_ngon_ngu_lap_trinh(ky_tu_nhap)
