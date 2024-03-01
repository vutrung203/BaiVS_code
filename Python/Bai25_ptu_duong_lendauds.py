def move_positive_to_front(lst):
    positive = [num for num in lst if num > 0]
    negative = [num for num in lst if num <= 0]
    
    return positive + negative

# Danh sách ban đầu
so = [-2, 3, -5, 6, -1, 4, -8, 9]
somoi = move_positive_to_front(so)

print(somoi)