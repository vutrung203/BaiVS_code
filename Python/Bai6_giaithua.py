def tinhgiaithua(n):
    giai_thua = 1;
    if (n == 0 or n == 1):
        return giai_thua;
    else:
        for i in range(2, n + 1):
            giai_thua = giai_thua * i;
        return giai_thua;
 
n = int(input("Nhập số nguyên dương n = "));
print("Giai thừa của", n, "là", tinhgiaithua(n));

# giai thua de quy
n = int(input("Nhập số cần tính giai thừa: "))
 
def giaiThua(n):
    if n == 0:
        return 1
    return n * giaiThua(n - 1)
 
print (giaiThua(n))