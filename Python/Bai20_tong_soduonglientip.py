def so_luong_so_duong_lien_tiep_co_tong_lon_nhat(danh_sach):
    max_tong = 0
    tong_hien_tai = 0
    so_luong_hien_tai = 0
    max_so_luong = 0
    
    for num in danh_sach:
        if num > 0:
            tong_hien_tai += num
            so_luong_hien_tai += 1
            if tong_hien_tai > max_tong:
                max_tong = tong_hien_tai
                max_so_luong = so_luong_hien_tai
        else:
            tong_hien_tai = 0
            so_luong_hien_tai = 0
    
    return max_so_luong

danh_sach = [1, 2, 3, -1, 4, 5, 6, 7, -2, -3, -4, 8, 9, 10]
print("Số lượng các số dương liên tiếp có tổng lớn nhất là:", so_luong_so_duong_lien_tiep_co_tong_lon_nhat(danh_sach))
