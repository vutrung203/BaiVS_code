#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

int a[100],b[100],c[200];
int n;
void nhapmang(int x[100], int &n)
{
    do
    {
        cout<<"nhap vao so phan tu :";
        cin>>n;
    }
    while(n<1);
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
int timmax(int x[100],int n)
{
    int max=x[0];
    for (int i = 0; i < n; i++)
    {
        if (x[i]>max)
        {
            max=x[i];
        }
        return max;
    }
}
void inmangconkhgiam(int x[100],int n)
{
    int b[100];
    for (int i = 0; i < n; i++)
    {
        b[i]=1;
    }
    for (int i = n-1; i >0; i--)
    {
        if(x[i]>=x[i-1])
        {
            b[i-1]=b[i]+1;
        }
    }
    cout<<endl<<"mang b : ";
    xuatmang(b,n);
    int soluong=timmax(b,n);
    for (int i = 0; i < n; i++)
    {
        if (b[i]==soluong)
        {
            cout<<endl<<"mang kh giam dai nhat : ";
            for (int j = i; j < soluong+i; j++)
            {
                cout<<x[j]<<" ";
            }   
        }
    }
}
int main()
{
    int n1,n2,n3;
    cout<<endl<<"------------"<<endl;
    nhapmang(a,n);
    xuatmang(a,n);
    inmangconkhgiam(a,n);
}