def hien_thi_ngon_ngu_lap_trinh(ky_tu):
    ky_tu = ky_tu.lower()  # Chuy?n d?i k� t? nh?p v�o th�nh ch? thu?ng d? so s�nh d? d�ng
    
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
        print(f"Ng�n ng? l?p tr�nh tuong ?ng v?i {ky_tu.upper()} l�: {ngon_ngu[ky_tu]}")
    else:
        print(f"Kh�ng c� ng�n ng? l?p tr�nh tuong ?ng v?i k� t? {ky_tu.upper()}")

# Nh?p k� t? t? ngu?i d�ng
ky_tu_nhap = input("Nh?p m?t k� t? trong b?ng ch? c�i: ")

# G?i h�m v� hi?n th? k?t qu?
hien_thi_ngon_ngu_lap_trinh(ky_tu_nhap)
