import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_absolute_error
from sklearn.metrics import mean_squared_error
from sklearn.metrics import median_absolute_error

data = pd.read_csv("D:\\BaiVS_code\\Python\\Fish.csv")

data.drop(['Species'], axis=1, inplace = True)
X=data.iloc[:,[1,2,3,4,5]]
y=data.iloc[:,0]

X_train,X_test,y_train,y_test = train_test_split(X,y,test_size=0.33)

LM = LinearRegression()
LM.fit(X_train,y_train)

print('hiệu suất huấn luyện:', LM.score(X_train,y_train))
print('hiệu suất test:', LM.score(X_test,y_test))

y_pred= LM.predict(X_test)
print('các giá trị weight dự đoán là:\n')
print(y_pred)
print('--------------------------------')

MEAValue = mean_absolute_error(y_test, y_pred,multioutput='uniform_average')
print('mean absolute error value (MAE): ',MEAValue)

MSEValue = mean_squared_error(y_test, y_pred,multioutput='uniform_average')
print('mean squared error value (MSE: ',MSEValue)

MdSEValue = median_absolute_error(y_test, y_pred)
print('median squared error value (MdSE: ',MdSEValue)

plt.xlabel("featuares- các đặc trưng")
plt.ylabel('trọng lượng')
plt.title('dự đoán trọng lượng cá')
plt.plot(X_test,y_pred,"ro",label = "dự đoán")
plt.plot(X_train,y_train,"b^",label = "huấn luyện")
plt.legend()
plt.show()
print('xong!')