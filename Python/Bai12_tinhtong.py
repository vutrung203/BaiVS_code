#Bài toán: Tính tổng các số từ 1->N
#Tiến hành xử lý:
tong=0
N=int(input("Mời bạn nhập 1 số nguyên dương N: "))
while not N>0:
    N=int(input("Mời bạn nhập lại số nguyên dương N: "))
#Tính tổng:
for i in range(1,N+1):
    tong+=i
#Kết luận:
print("Tổng các số từ 1 ->",N,"là:",tong)