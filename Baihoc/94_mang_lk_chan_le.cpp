#include<iostream>
#include<stdio.h>
#include"math.h"
using namespace std;

void nhapmang(int a[100],int &n)
{
    do
    {
        cout<<"nhap vao so luong phan tu (0 < n < 100) : ";
        cin>>n;
    }
    while(n<1 || n>100);
    
    for (int i = 0; i < n; i++)
    {
        cout<<"["<<i<<"]"<<" = ";
        cin>>a[i];
    }
}
void xuatmang(int a[100],int n)
{
     cout<<"day A vua nhap la :"<<endl;
    for (int i = 0; i < n; i++)
    {
        //cout<<" "<<a[i];
        cout<<"x ["<<i<<"] = "<<a[i]<<endl;
    }
}
void demsole(int a[100],int &n)
{
    cout<<"day so le la : ";
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 1)
        {
            cout<<a[i]<<" ";
        }
    }
}
void demsochan(int a[100],int &n)
{
    cout<<endl<<"day so chan la : ";
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            cout<<a[i]<<" ";
        } 
    }
}
int main()
{
    int a[100];
    int n;
    nhapmang(a,n);
    xuatmang(a,n);
    demsole(a,n);
    demsochan(a,n);
}