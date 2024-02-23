'''
#tbc = 0
lst = [1,2,3,4,5,-5,-4,-3]
for x in lst:
    print(x,end='\t')
print()
lst.sort()
print(lst)
'''
def trung_binh_cong(danhSach):
   tongDanhSach = sum(danhSach)
   soPhanTu = len(danhSach)
   trungBinhCong = tongDanhSach/soPhanTu
   return trungBinhCong

#Nhap danh sach tu ban phim
danhSach = input("nhap tbc : ").split()
#Kiem tra xem danh sach co rong hay khong
if len(danhSach) == 0:
   print("Danh sach rong")
else:
   #Khoi lenh co the phat sinh loi
   try:
       #Ep kieu du lieu sang so thuc
       danhSachSo = list(map(float, danhSach))
       #Goi thuc thi ham va truyen tham so cho ham
       trungBinhCong = trung_binh_cong(danhSachSo)
       print("ket qua : ",trungBinhCong)
   #Khoi lenh duoc thuc thi khi loi xay ra
   except:
      print("Vui long nhap cac phan tu la so thuc!")