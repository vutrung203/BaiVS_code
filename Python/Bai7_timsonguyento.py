def sieve_sundaram(n):
    # Tạo mảng chứa các số từ 1 đến n
    numbers = list(range(1, n + 1))
     
    # Sàng Sundaram
    for i in range(1, n // 2 + 1):
        for j in range(i, (n - i) // (2 * i + 1) + 1):
            k = i + j + 2 * i * j
            if k <= n:
                numbers[k - 1] = 0  # Loại bỏ phần tử khỏi danh sách bằng cách đặt giá trị thành 0
     
    # Loại bỏ số 1 khỏi danh sách (nếu có)
    numbers = [x for x in numbers if x != 0]
     
    # Bổ sung số 2 vào danh sách nếu nó không có trong đó
    if 2 not in numbers:
        numbers.insert(0, 2)
     
    return numbers
 
n = int(input('n = '))
prime_numbers = sieve_sundaram(n)
print(prime_numbers)