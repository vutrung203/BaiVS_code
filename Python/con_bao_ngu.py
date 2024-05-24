import pandas as pd
import matplotlib.pyplot as plt

# 1. Đọc file Abalone.name để hiểu các mô tả trong phần dữ liệu
with open('abalone.names', 'r') as file:
    descriptions = file.read()
print(descriptions)

# 2. Đọc dữ liệu từ file Abalone.data và hiển thị một số dòng đầu tiên
data = pd.read_csv('abalone.data', header=None)
print(data.head())

# Đặt tên cột cho dữ liệu
cotcuabang = ['Sex', 'Length', 'Diam', 'Height', 'Whole', 'Shucked', 'Viscera', 'Shell', 'Rings']
data.columns = cotcuabang

# 3. Lập bảng thống kê các dữ liệu
statistics = data[['Length', 'Diam', 'Whole', 'Rings']].describe()
print(statistics)

# 4. Biểu diễn bằng biểu đồ các dữ liệu
# Sự tương quan giữa rings (tuổi) với trọng lượng toàn bộ (whole weigh)
plt.scatter(data['Rings'], data['Whole'])                       # data giữa 2 đại lượng
plt.title('Tương quan giữa Tuổi and Trọng Lượng Weight')             # gọi tên tương quan so sánh
plt.xlabel('Rings')                                             # tọa độ x
plt.ylabel('Whole Weight')                                      # tọa độ y
plt.show()

# Sự tương quan giữa rings (tuổi) với chiều dài (length)
plt.scatter(data['Rings'], data['Length'])
plt.title('Tương quan giữa Tuổi and Chiều Dài')
plt.xlabel('Rings')
plt.ylabel('Length')
plt.show()

# Sự tương quan giữa rings (tuổi) với đường kính (Diameter)
plt.scatter(data['Rings'], data['Diam'])
plt.title('Tương quan giữa Tuổi and Đường Kính')
plt.xlabel('Rings')
plt.ylabel('Diameter')
plt.show()

# Sự tương quan giữa Chiều dài (length) và trọng lượng toàn bộ (whole weigh)
plt.scatter(data['Length'], data['Whole'])
plt.title('Tương quan giữa Chiều Dài and Trọng Lượng')
plt.xlabel('Length')
plt.ylabel('Whole Weight')
plt.show()
