def tim_phan_tu_lon_thu_hai(danh_sach):
    sorted_list = sorted(danh_sach, reverse=True)
    
    # Phần tử lớn thứ hai
    second_largest = sorted_list[1]
    
    positions = [i for i, x in enumerate(danh_sach) if x == second_largest]
    
    return second_largest, positions

danh_sach = [1, 3, 5, 7, 5, 9, 4]
phan_tu_lon_thu_hai, vi_tri = tim_phan_tu_lon_thu_hai(danh_sach)
print("Phần tử lớn thứ hai của danh sách là:", phan_tu_lon_thu_hai)
print("Vị trí của các phần tử có giá trị lớn thứ hai là:", vi_tri)