#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

void daysole(int a, int n)
{
    cout<<"day so le la : ";
    for(int i = 0; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            cout<<i<<" ";
        }
    }
}

void daysochan(int a, int n)
{
    cout<<endl<<"day so le la : ";
    for(int i = 0; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
   int n;
   int a;
   int tbp;
   cout<<"nhap vao so n : ";
   cin>>n;
   daysole(a,n);
    for(int i = 1;i <= n;i++)
    {
        if(i % 2 == 1)
        {
            tbp = tbp + i * i;
        }
    }
    cout<<endl<<" - Tong binh phuong cac so le la: "<<tbp;
   daysochan(a,n);
   for(int i = 1;i <= n;i++)
    {
        if(i % 2 == 0)
        {
            tbp = tbp + i * i;
        }
    }
    cout<<endl<<" - Tong binh phuong cac so chan la: "<<tbp;
}