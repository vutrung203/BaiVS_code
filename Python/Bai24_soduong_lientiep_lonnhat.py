def max_subarray_sum(arr):
    max_sum = float('-inf')
    current_sum = 0
    start_index = 0
    end_index = 0
    temp_start_index = 0

    for i in range(len(arr)):
        current_sum += arr[i]
        if current_sum > max_sum:
            max_sum = current_sum
            start_index = temp_start_index
            end_index = i
        if current_sum < 0:
            current_sum = 0
            temp_start_index = i + 1

    return max_sum, start_index, end_index

# Example usage:
arr = [2, 3, -8, -3, 4, -2, 6, -5]
max_sum, start, end = max_subarray_sum(arr)
if max_sum > 0:
    print("Đoạn con có tổng lớn nhất là:", arr[start:end+1])
    print("Tổng của đoạn con là:", max_sum)
else:
    print("Không có đoạn con dương nào trong danh sách.")
