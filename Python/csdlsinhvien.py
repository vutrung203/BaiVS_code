def luufile():
    file=open('csdlsinhvien.txt','w',encoding='utf-8')
    file.writelines("sv01;Nguyễn Văn Chúc;9.5\n")
    file.writelines("sv02;Nguyễn Thị Mừng;8.5\n")
    file.writelines("sv03;Vũ Thị Năm;9.0\n")
    file.writelines("sv04;Phan Văn Mới;7.5\n")
    file.close()
luufile()  
def docfile():
    file = open('csdlsinhvien.txt','r',encoding='utf-8')
    for line in file:
        print(line.strip())
    file.close()
docfile()          
