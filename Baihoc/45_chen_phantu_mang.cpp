#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;

int a[100];
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
void themvaocuoimang(int x[100], int &n,int m)
{
    int size = sizeof(x)/sizeof(x[0]);
    if(n==size)
    {
        cout<<"kh the them vao mang!";
    }
    x[n]=m;
    n++;
}
void themvaodaumang(int x[100], int &n,int m)
{
    int size = sizeof(x)/sizeof(x[0]);
    if(n==size)
    {
        cout<<"kh the them vao mang!";
    }
    n++;
    for (int i = n-1; i >0; i--)
    {
        x[i]=x[i-1];
    }
    x[0]=m;
    
}
void themvaovitriK(int x[100], int &n,int m,int k)
{
    int size = sizeof(x)/sizeof(x[0]);
    if(n==size)
    {
        cout<<"kh the them vao mang!";
    }
    n++;
    for (int i = n-1; i >k; i--)
    {
        x[i]=x[i-1];
    }
    x[k]=m;
}
int main()
{
    nhapmang(a,n);
    xuatmang(a,n);
    themvaocuoimang(a,n,99);
    xuatmang(a,n);
    themvaodaumang(a,n,88);
    xuatmang(a,n);
    themvaovitriK(a,n,77,3);
    xuatmang(a,n);
}
