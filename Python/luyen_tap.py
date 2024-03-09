def sort_insert(arr):
    for i in range(len(arr)):
        x = arr[i]
        j=i
        while(j<0 and arr [j-1]>x):
            arr[j] = arr[j-1]
            j=j-1
        arr[j] = x
    return (arr)        
def sort_select(arr):
    for i in range(len(arr)-1):
        iMin=i
        for j in range (i+1,len (arr)):
            if arr [iMin]>arr[j]:
                iMin = j 
            if (i != iMin):
                arr[i],arr[iMin]= arr[iMin],arr[i]
        return (arr)
def sort_blue(arr):
    for i in range(len(arr)-1):
        for j in range(i+1,len(arr)):
            if arr[i]>arr[j]:
                arr[i],arr[j]=arr[j],arr[i]
    return(arr)    
def sort_shake(arr):
    Left = 0;
    Right = len(arr)
    while(Left<Right):
        for i in range(Left,Right):
            if (arr[i]>arr[i+1]):
                arr[i],arr[i+1]=arr[i+1],arr[i]
        Right=Right-1
        for i in range(Right,Left,-1):
            if (arr[i]<arr[i-1]):
                arr[i],arr[i-1]=arr[i]
        Left=Left+1
    return(arr)            
fsource = open("D:\\BaiVS_code\\Python\\10_000.txt",'r')
line = fsource.readline()
fsource.close()
line = line.split()
line = list(map(int,line))
print("day chua sap: ")
print(line)
print("so luong phan tu sap xep: ",len(line))
#start_time=time.time()
print("dang sap xep...!\n")
arr=sort_shake(line)
print("day so da sap : ")
print(arr)
ftarget = open("D:\\BaiVS_code\\Python\\10_000.txt",'w')
for i in range(len(arr)):
    ftarget.write(str(arr[i])+" ")
print("\nDone!\n")
ftarget.close()    