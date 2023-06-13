#include<iostream>
#include<stdio.h>
#include<conio.h>
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
    char gt;
    do
    {
        cout<<endl<<"------"<<endl<<"MENU"<<endl;
        cout<<"1 - nhap mnag"<<endl;
        cout<<"2 - xuat mang"<<endl;
        cout<<"3 - themphan tu cuoi mang"<<endl;
        cout<<"4 - them phan tu dau mang"<<endl;
        cout<<"5 - them phan tu vao vi tri k"<<endl;
        cout<<"x - thoat"<<endl;
        cout<<"lua chon cua bn la: ";
        cin>> gt;
        if (gt=='1')
        {
            nhapmang(a,n);
        }
        else if (gt=='2')
        {
            xuatmang(a,n);
        }
        else if (gt=='3' || gt=='4' || gt=='5')
        {
            int m;
            cout<<endl<<"nhap vao m = ";
            cin>>m;
            if (gt=='3')
            {
                themvaocuoimang(a,n,m);
            }
            else if (gt=='4')
            {
                themvaodaumang(a,n,m);                
            }
            else if (gt=='5')
            {
                int k;
                cout<<endl<<"nhap vao k = ";
                cin>>k;
                themvaovitriK(a,n,m,k);
            }
            
        }
    }
    while(gt!='x');
}