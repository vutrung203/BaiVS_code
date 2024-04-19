import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_absolute_error
from sklearn.metrics import mean_squared_error
from sklearn.metrics import median_absolute_error

# 1. Đọc file Abalone.name để hiểu các mô tả trong phần dữ liệu
with open("abalone.name", 'r') as file:
    descriptions = file.read()
print(descriptions)

# 2. Đọc dữ liệu từ file Abalone.data và hiển thị một số dòng đầu tiên
data = pd.read_csv('abalone.data', header=None)
print(data.head())

# Đặt tên cột cho dữ liệu
columns = ['Sex', 'Length', 'Diam', 'Height', 'Whole', 'Shucked', 'Viscera', 'Shell', 'Rings']
data.columns = columns

# 3. Lập bảng thống kê các dữ liệu
statistics = data[['Length', 'Diam', 'Whole', 'Rings']].describe()
print(statistics)

# 4. Biểu diễn bằng biểu đồ các dữ liệu
# Sự tương quan giữa rings (tuổi) với trọng lượng toàn bộ (whole weigh)
plt.scatter(data['Rings'], data['Whole'])
plt.title('Correlation between Rings and Whole Weight')
plt.xlabel('Rings')
plt.ylabel('Whole Weight')
plt.show()

# Sự tương quan giữa rings (tuổi) với chiều dài (length)
plt.scatter(data['Rings'], data['Length'])
plt.title('Correlation between Rings and Length')
plt.xlabel('Rings')
plt.ylabel('Length')
plt.show()

# Sự tương quan giữa rings (tuổi) với đường kính (Diameter)
plt.scatter(data['Rings'], data['Diam'])
plt.title('Correlation between Rings and Diameter')
plt.xlabel('Rings')
plt.ylabel('Diameter')
plt.show()

# Sự tương quan giữa Chiều dài (length) và trọng lượng toàn bộ (whole weigh)
plt.scatter(data['Length'], data['Whole'])
plt.title('Correlation between Length and Whole Weight')
plt.xlabel('Length')
plt.ylabel('Whole Weight')
plt.show()
