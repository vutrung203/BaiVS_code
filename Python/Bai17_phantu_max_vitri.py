def tim_phan_tu_lon_nhat(danh_sach):
    max_value = max(danh_sach)
    
    last_index = len(danh_sach) - 1 - danh_sach[::-1].index(max_value)
    
    return max_value, last_index

danh_sach = [1, 3, 5, 7, 5, 9, 5]
max , vitri = tim_phan_tu_lon_nhat(danh_sach)
print("Phần tử lớn nhất của danh sách là:",max)
print("Vị trí của phần tử lớn nhất cuối cùng trong danh sách là:",vitri)
