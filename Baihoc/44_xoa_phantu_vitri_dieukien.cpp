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
void xoamangtaivitri(int x[100], int &n, int vi_tri)
{
    for (int i = vi_tri; i < n-1; i++)
    {
        x[i]=x[i+1];
    }
    n--;
}
void xoamangtheogiatri(int x[100], int &n)
{
    int gt;
    cout<<endl<<"nhap gia tri can xoa : ";
    cin>>gt;
    for (int i = 0; i < n; i++)
    {
        if(x[i]==gt)
        xoamangtaivitri(x,n,i);
    }
}
int main()
{
    nhapmang(a,n);
    xuatmang(a,n);
    xoamangtheogiatri(a,n);
    xuatmang(a,n);
}
