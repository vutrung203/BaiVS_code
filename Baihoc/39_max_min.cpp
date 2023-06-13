#include<iostream>
#include<stdio.h>
using namespace std;

int timmin(int x[],int n)
{
int min = x[0];
    for (int i = 1; i < n; i++)
    {
        if(min>x[i])
        min=x[i];
    }
    return min;
}
int timmax(int x[],int n)
{
    int max = x[0];
    for (int i = 1; i < n; i++)
    {
        if(max<x[i])
        max=x[i];
    }
    return max;
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
    cout<<"max = "<<timmax (a,n);
    cout<<endl<<"min = "<<timmin(a,n); 
}