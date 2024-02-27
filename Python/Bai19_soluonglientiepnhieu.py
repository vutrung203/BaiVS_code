def so_luong_so_duong_lien_tiep_nhat(danh_sach):
    max_so_luong = 0
    so_luong_hien_tai = 0
    
    for num in danh_sach:
        if num > 0:
            so_luong_hien_tai += 1
            max_so_luong = max(max_so_luong, so_luong_hien_tai)
        else:
            so_luong_hien_tai = 0
    
    return max_so_luong

danh_sach = [1, 2, 3, -1, 4, 5, 6, 7, -2, -3, -4, 8, 9, 10]
print("Số lượng các số dương liên tiếp nhiều nhất là:", so_luong_so_duong_lien_tiep_nhat(danh_sach))
