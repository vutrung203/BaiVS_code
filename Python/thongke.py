#_*_ coding: utf-8 _*_
from collections import Counter
import codecs

#chuong trinh
print("======================")
print("      chuong trinh    ")
print("======================")
#file mở
fsource = codecs.open("D:\\BaiVS_code\\Python\\van_ban.txt",'r',"utf8")
dict_word={} #luu tru tu dien su dung
for line in fsource: #doc toàn bộ
    maxline = len(line)
    i=0
    while i < maxline:
        # loại bỏ các dấu chấm câu
        if line [i]=="." or line[i]=="," or line[i]==";":
            line = line[:i]+line[i+1:]
            maxline = maxline-1
        i = i+1
    list = line.split() #biến đổi dong vừa đọc thành đoạn list
    print(line)
    count_word = Counter(list)#thống kê từng từ trong dòng list
    print(count_word)
    for word in count_word: # cập nhập nó vào từ điển dict
        if word in dict_word: #nếu có rồi cập nhập theo thống kê
            dict_word[word] = dict_word[word]+ count_word[word] # cập nhật
        else:
            dict_word.setdefault(word,count_word[word])# nếu chưa có thêm mới phần tử
fsource.close()
#mở file
ftarget = codecs.open("D:\\BaiVS_code\\Python\\van_ban.txt",'w',"utf8")
#ghi file
for word in dict_word:
    ftarget.write(word+":"+str(dict_word[word])+'\n')
print("\nDone!\n")
ftarget.close()