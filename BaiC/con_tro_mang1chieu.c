// Số lớn nhất số nhỏ nhất

#include<stdio.h>
#include<conio.h>

void (int nhapmang)
int main()
{
    int a[20],i,n;
    printf("nhap so du lieu: ");
    printf("so phan tu n= ");
    scanf("%d"&n);
    NhapContro(a,n);
    int max=*a,min=*a, tong=0;
    for (int i=0;i<n;i++)
    {
        if(max<*(a+i)) max=*(a+i);
        if(min>*(a+i)) min=*(a+i);
        tong+=*(a+i);
    }
    xuatmangcontro(a,n);
    printf("\n so lon nhat %d: ",max);
    printf("\n so nho nhat %d: ",min);
    printf("\n tong cac so %d: ",tong);
    return 0;
}
