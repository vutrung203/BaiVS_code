#print("Hello")
#list[]
#tip()
#dict{}

dictcar = {
    "brand":"honda",
    "model":"Honda Civic",
    "year":1972
}

#xử dụng khóa 
#print(dictcar["model"])

#kh xử dụng khóa 
#print(dictcar)

#thay đổi giá trị
#dictcar["year"]=2020
#print(dictcar)

#duyệt item
'''
for x in dictcar:
    print(x,":",dictcar.get(x))
print("===========")

#duyệt item kh có key
for x in dictcar.values():
    print(x)
'''

#item có màu 
'''
dictcar["color"] = "yellow"
print(dictcar)
'''
#ktr item tồn tại
if " model" in dictcar:
    print("khoa\"model\"co ton tai")
else:
    print("khoa\model\"khong ton tai")