def move_positive_to_front(lst):
    positive_elements = [num for num in lst if num > 0]
    negative_elements = [num for num in lst if num <= 0]
    
    return positive_elements + negative_elements

# Danh sách ban đầu
nums = [-2, 3, -5, 6, -1, 4, -8, 9]
updated_nums = move_positive_to_front(nums)

print(updated_nums)