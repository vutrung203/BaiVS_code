 # D:\\BaiVS_code\\Python\\chungkhoan.csv
from matplotlib.widgets import TextBox
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

path = "D:\\BaiVS_code\\Python\\"
stockData = []

def LoadData2(filename):
    print("Loading data ...")
    stock_df = pd.read_csv(path + filename)
    return stock_df

def GetPriceClose(stockID):
    listPrice = stockData[stockData["<Ticker>"] == stockID]["<Close>"].tolist()
    return listPrice

def PriceMA(listPrice, nDay):
    length = len(listPrice)
    listPriceMA = []
    queue_nDay = []
    value = 0
    count = 0
    n = length - 1

    while count < nDay:
        queue_nDay.append(listPrice[n])
        value += listPrice[n]
        count += 1
        n -= 1
        listPriceMA.append(value / nDay)

    while n > 0:
        value -= queue_nDay[0]
        queue_nDay.pop(0)
        queue_nDay.append(listPrice[n])
        value += queue_nDay[nDay - 1]
        listPriceMA.insert(0, value / nDay)
        n -= 1

    return listPriceMA

def showPrice(nDay):
    print("Mã chứng khoán:")
    stockID = input()
    listPrice = GetPriceClose(stockID)
    listPrice.reverse()

    listPriceMA5 = PriceMA(listPrice, 5)
    listPriceMA20 = PriceMA(listPrice, 20)
    listPriceMA50 = PriceMA(listPrice, 50)

    plt.plot(listPrice[-100:], "ro-", label="Giá")
    plt.plot(listPriceMA5[-nDay:], "go-", label="MA5")
    plt.plot(listPriceMA20[-nDay:], "bo-", label="MA20")
    plt.plot(listPriceMA50[-nDay:], "yo-", label="MA50")
    plt.title("Biểu đồ giá trung bình động: " + stockID)
    plt.xlabel("Ngày")
    plt.ylabel("Giá - VND")
    plt.legend()
    plt.show()

print("PHÂN TÍCH DỮ LIỆU STOCK")
print("---------")
stockData = LoadData2("chungkhoan.csv")
stockID = "HBC"
nDay = 100
chon = 1

while chon != 3:
    print("MENU")
    print("------")
    print("1. Đặt lại khung thời gian")
    print("2. Show biểu đồ MA")
    print("3. Thoát")
    print("------")
    print("Nhập vào số của menu:")
    chon = int(input())

    if chon == 1:
        print('Đặt lại khung thời gian nDay=')
        nDay = int(input())
    elif chon == 2:
        showPrice(nDay)

print("Done!")