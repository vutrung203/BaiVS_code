import pandas as pd
import matplotlib.pyplot as plt

# Đọc dữ liệu từ file Bank_Personal_Loan_Modelling.csv
data = pd.read_csv("Bank_Personal_Loan_Modelling.csv")

# 1a. Đếm số trường và số mẫu
num_columns = data.shape[1]
num_samples = data.shape[0]

# 1b. Giải thích các trường dữ liệu và đơn vị tính
column_description = {
    'Age': 'Tuổi (năm)',
    'Experience': 'Kinh nghiệm (năm)',
    'Income': 'Thu nhập (USD)',
    'CCAvg': 'Chi tiêu trung bình trong tháng (USD)',
    'Personal Loan': 'Vay vốn cá nhân (0: không, 1: có)',
    'Mortgage': 'Vay thế chấp (0: không, 1: có)'
}

# 2. Bảng thống kê Min, Max, Trung bình
stats = data[['Age', 'Experience', 'Income']].describe().loc[['min', 'max', 'mean']]

# 3. Đếm số người theo yêu cầu
num_below_30_high_income = data[(data['Age'] < 30) & (data['Income'] > 50000)].shape[0]
num_below_30_high_experience = data[(data['Age'] < 30) & (data['Experience'] > 5)].shape[0]

# 4. Biểu đồ
plt.figure(figsize=(12, 10))

plt.subplot(2, 2, 1)
plt.scatter(data['Age'], data['Experience'])
plt.xlabel('Age')
plt.ylabel('Experience')
plt.title('Age vs Experience')

plt.subplot(2, 2, 2)
plt.scatter(data['Age'], data['Income'])
plt.xlabel('Age')
plt.ylabel('Income')
plt.title('Age vs Income')

plt.subplot(2, 2, 3)
plt.scatter(data['Age'], data['CCAvg'])
plt.xlabel('Age')
plt.ylabel('CCAvg')
plt.title('Age vs CCAvg')

plt.subplot(2, 2, 4)
plt.scatter(data['Income'], data['CCAvg'])
plt.xlabel('Income')
plt.ylabel('CCAvg')
plt.title('Income vs CCAvg')

plt.tight_layout()
plt.savefig('relationship_plots.png')
plt.show()

# Ghi kết quả vào file ketqua.txt với bộ mã utf-8
with open('ketqua.txt', 'w', encoding='utf-8') as f:
    f.write(f"1a. Số trường: {num_columns}, Số mẫu: {num_samples}\n")
    f.write("1b. Giải thích các trường dữ liệu:\n")
    for col, desc in column_description.items():
        f.write(f"- {col}: {desc}\n")
    f.write("\n2. Bảng thống kê Min, Max, Trung bình:\n")
    f.write(stats.to_string())
    f.write(f"\n\n3a. Số người dưới 30 có thu nhập trên 50.000$: {num_below_30_high_income}\n")
    f.write(f"3b. Số người dưới 30 có kinh nghiệm trên 5 năm: {num_below_30_high_experience}")

print("Xử lý hoàn tất. Kết quả được ghi vào file ketqua.txt.")