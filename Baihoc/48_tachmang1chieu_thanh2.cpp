#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

int a[100],b[100],c[200];
int n,n1,n2;
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
void tachmang(int x[100],int n,int x1[100],int &n_1,int x2[100],int &n_2)
{
    int i1=0;  n_1=0;
    int i2=0;  n_2=0;
    for (int i = 0; i < n; i++)
    {
        if (x[i]%2==0)
        {
            x1[i1]=x[i];
            i1++;
            n_1++;
        }
        else
        {
            x2[i2]=x[i];
            i2++;
            n_2++;
        }
    }
}
int main()
{
    int n1,n2,n3;
    cout<<endl<<"------------"<<endl;
    nhapmang(a,n);
    xuatmang(a,n);
    tachmang(a,n,b,n1,c,n2);
    xuatmang(b,n1);
    xuatmang(c,n2); 
}