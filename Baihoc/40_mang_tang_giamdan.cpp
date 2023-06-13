#include<iostream>
#include<stdio.h>
using namespace std;

void swap (int &a, int &b)
{
    int tam=a;
    a=b;
    b=tam;
}
void sapxeptang(int x[],int n)
{
    for (int i = 0; i < n-1 ; i++)
    {
        int vitrinhonhat =i;
        for (int j = i+1; j < n; j++)
        {
            if(x[j]<x[vitrinhonhat])
            vitrinhonhat = j;
        }
        swap(x[i],x[vitrinhonhat]);
    }
    
}
void sapxepgiam(int x[],int n)
{
    for (int i = 0; i < n-1 ; i++)
    {
        int vitrilonnhat =i;
        for (int j = i+1; j < n; j++)
        {
            if(x[j]>x[vitrilonnhat])
            vitrilonnhat = j;
        }
        swap(x[i],x[vitrilonnhat]);
    }
    
}
void coutmang(int x[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<x[i];
    }
    
}
int main ()
{
    int a[100],n;
    do
    {
        cout<<"nhap so phan tu (0 < n < 100): ";
        cin>>n;
    } while (n<1 || n>100);
    for (int i = 0; i < n; i++)
    {
        cout<<"["<<i<<"]"<<" = ";
        cin>>a[i];
    }
    cout<<"\nmang tang dan :";
    sapxeptang(a,n);
    coutmang(a,n);

    cout<<"\nmang giam dan :";
    sapxepgiam(a,n);
    coutmang(a,n);
}