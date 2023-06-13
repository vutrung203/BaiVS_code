#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a[100];
    int n;
    do
    {
        cout<<"nhap vao so luong phan tu (0 < n < 100) ";
        cin>>n;
    }
    while(n<1 || n>100);
    // nhap du lieu mang
    for (int i = 0; i < n; i++)
    {
        cout<<"["<<i<<"]"<<" = ";
        cin>>a[i];
    }
    cout<<"mang vua nhap la :";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong+=a[i];  // tong = tong + a[i]
    }cout<<"\ntong = "<<tong;
    
}