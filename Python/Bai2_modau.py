print ("xin chào , tôi là BOT")
name = input ("bạn tên là gì : ")
print("chào bạn",name , ", chúc một ngày tốt lành")
age = input("bạn bao nhiêu tuổi :")
print("bạn còn rất trẻ")
sex = input ("giới tính của bạn 1 - girl 2 - boy : ")
if sex == "1":
    print("bạn là cô gái ")
else:
    print("bạn là chàng trai")
print("Bạn có cần BOT giúp gì không? ") 
select=input("1-Học bài 2-Nói chuyện 3- Không làm gì cả:") 
print ("Bạn đã chọn:", select) 
if (select == "1"): 
 print("Học bài") 
elif (select == "2"): 
 print("Nói chuyện") 
else: 
 print("Không làm gì cả!")
