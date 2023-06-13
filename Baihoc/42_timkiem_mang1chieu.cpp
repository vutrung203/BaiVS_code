#include<iostream>
#include<stdio.h>
using namespace std;

int a[100];
int n;
int x;
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
int timkiem(int x[100],int n,int tk)
{
    int kq=0;
    for (int i = 0; i < n; i++)
    {
        if(x[i]==tk)
        {
            kq=1;
            return 1;
        }
    }
    return kq;
}
void thuchhientimkiem(int x[100],int n)
{
    int tk;
    cout<<endl<<"nhap vao gia tri can tim : ";
    cin>>tk;
    int kq = timkiem(x,n,tk);
    if (kq==1)
    {
        cout<<endl<<"tim thay";
    }
    else
    {
        cout<<endl<<"kh tim thay";
    }
}
int main()
{
    nhapmang(a,n);
    xuatmang(a,n);
    thuchhientimkiem(a,n);

}