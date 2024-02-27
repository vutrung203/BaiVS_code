def find_max_positive_subarray_start(arr):
    max_len = 0
    max_start = -1
    current_len = 0
    current_start = -1

    for i, num in enumerate(arr):
        if num > 0:
            if current_len == 0:
                current_start = i
            current_len += 1
        else:
            if current_len > max_len:
                max_len = current_len
                max_start = current_start
            current_len = 0

    if current_len > max_len:
        max_start = current_start

    return max_start

# Example usage:
arr = [-1, -2, 3, 4, 5, 6, 7, -8, 9, 10]
start_index = find_max_positive_subarray_start(arr)
print("so duong dai nhat : ", start_index)
