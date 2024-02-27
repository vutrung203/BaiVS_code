def count_non_increasing_elements(lst):
    max_non_increasing_count = 1  
    current_count = 1  
    
    for i in range(1, len(lst)):
        
        if lst[i] < lst[i - 1]:
            current_count += 1  #
            
            max_non_increasing_count = max(max_non_increasing_count, current_count)
        else:
            current_count = 1  

    return max_non_increasing_count

# Ví dụ sử dụng hàm
lst = [5, 4, 3, 3, 2, 1, 2, 2, 2, 1]
print("Số lượng phần tử không tăng nhiều nhất là:", count_non_increasing_elements(lst))
