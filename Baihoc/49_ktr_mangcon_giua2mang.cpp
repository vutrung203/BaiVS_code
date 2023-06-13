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
int kiemtramangcon(int x1[100],int n1,int x2[100],int n2)
{
    int kq=0;
    if(n2<=n1)
    {
        for (int i = 0; i < n1; i++)
        {
            if (x1[i]==x2[0])
            {
                int j=0;
                for (; j < n2; j++)
                {
                    if (x1[i+j]!=x2[j])
                    break;
                    {
                        /* code */
                    }
                }
                if(j==n2)
                kq = 1;
            }
        }
    }
    return kq;
}
int main()
{
    int n1,n2,n3;
    cout<<endl<<"------------"<<endl;
    nhapmang(a,n1);
    xuatmang(a,n1);
    cout<<endl<<"------------"<<endl;
    nhapmang(b,n2);
    xuatmang(b,n2);
    cout<<endl<<"------------"<<endl;
    int kt = kiemtramangcon(a,n1,b,n2);
    if (kt)
    {
        cout<<endl<<"mang b la mang con cua mang a";
    }
    else
    {
        cout<<endl<<"mang b kh la mang con cua mang a";
    }
    
}