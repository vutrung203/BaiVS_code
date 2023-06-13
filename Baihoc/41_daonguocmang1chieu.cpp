#include<iostream>
#include<stdio.h>
using namespace std;

int a[100];
int n;
void nhapmang(int x[100], int &n)
{
    cout<<"nhap vao so phan tu :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"x["<<i<<"] : ";
        cin>>x[i];
    }
}
void xuatmang(int x[100], int n)
{
    cout<<endl<<"gia tri mang :";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<x[i];
    }
}
void xuatmangnguoc(int x[100],int n)
{
    cout<<"gia tri mang dao nguoc : ";
    for (int i = n-1; i >= 0; i--)
    {
        cout<<" "<<x[i];
    }
}
int daonguocmang(int x[100],int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = x[i];
        x[i]=x[n-i-1];
        x[n-i-1]=temp;
    } 
    return 0;
}
int main()
{
    nhapmang(a,n);
    xuatmang(a,n);
    //xuatmangnguoc(a,n);
    daonguocmang(a,n);
    xuatmang(a,n);
}