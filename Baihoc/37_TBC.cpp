#include<iostream>
#include<stdio.h>
using namespace std;

float tbc(int x[],int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong+=x[i];
    }
    return (float)tong/n;
}
float tbcsoduong(int x[],int n)
{
    int tong = 0;
    int soluongsoduong=0;
    for (int i = 0; i < n; i++)
    {
        if(x[i]>=0)
        {
            tong+=x[i];
            soluongsoduong++;
        }
    }
    return soluongsoduong>0?(float)tong/soluongsoduong:-1;
}
int main()
{
    int a[100];
    int n;
    do
    {
        cout<<"nhap so phan tu (0 < n <= 100) : ";
        cin>>n;
    } while (n<1 || n>100);
    for (int i = 0; i < n; i++)
    {
        cout<<"["<<i<<"]"<<" = ";
        cin>>a[i];
    }
    cout<<"\ntrung binh cong "<<tbc(a,n);
    float tbcsd = tbcsoduong(a,n);
    if(tbcsd>0)
    {
        cout<<"\ntrung binh cong so duong : "<<tbcsd;
    }
    else
    {
        cout<<"\nmang kh co so duong";
    }
}