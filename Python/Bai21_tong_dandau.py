def max_consecutive_sign(nums):
    if not nums:
        return 0
    
    max_count = 1  # Số lượng phần tử liên tiếp nhiều nhất
    count = 1      # Số lượng phần tử liên tiếp hiện tại
    for i in range(1, len(nums)):
        # Nếu phần tử hiện tại có cùng dấu với phần tử trước đó
        if (nums[i] >= 0 and nums[i-1] >= 0) or (nums[i] < 0 and nums[i-1] < 0):
            count += 1
            max_count = max(max_count, count)  # Cập nhật số lượng nhiều nhất nếu cần
        else:
            count = 1  # Reset lại số lượng nếu dấu khác nhau
            
    return max_count

# Ví dụ sử dụng
numbers = [1, 2, -3, 4, -5, 6, -7, 8, 9]
print("Số lượng phần tử liên tiếp đan dấu nhiều nhất:", max_consecutive_sign(numbers))
