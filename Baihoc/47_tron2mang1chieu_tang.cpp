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
void sapxeptangdan(int x[100], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int  j = i+1; j < n; j++)
        {
            if (x[i]>x[j])
            {
                int temp = x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    } 
}
void tronmang(int x1[100],int n_x1,int x2[100],int n_x2, int x3[200],int &n_x3)
{
    n_x3 = n_x1+n_x2;
    int i1=0;
    int i2=0;
    int i3=0;
    while (i3<n_x3)
    {
        if (i1>=n_x1)
        {
           x3[i3]=x2[i2];
           i2++;
        }
        else if (i2>=n_x2)
            {
               x3[i3]=x1[i1];
               i1++;
            }
        else if (x1[i1]<x2[i2])
        {
            x3[i3]=x1[i1];
            i1++;
        }
        else
        {
            x3[i3]=x2[i2];
            i2++;
        }
        i3++;
    }
}
int main()
{
    int n1,n2,n3;
    cout<<endl<<"------------"<<endl;
    nhapmang(a,n1);
    xuatmang(a,n1);
    sapxeptangdan(a,n1);
    xuatmang(a,n1);
    cout<<endl<<"------------"<<endl;
    nhapmang(b,n2);
    xuatmang(b,n2);
    sapxeptangdan(b,n2);
    xuatmang(b,n2);
    cout<<endl<<"------------"<<endl;
    tronmang(a,n1,b,n2,c,n3);
    xuatmang(c,n3);
}