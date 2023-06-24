#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

void daysole(int n)
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

void daysochan(int n)
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
int TBPsole(int n) // tra ve giá tri tong bình phuong so le
{
    int tbp = 0;
    for(int i = 1; i <= n; i+=2) // chi duyet so le
    {
        tbp += i * i;
    }
    return tbp;
}
float TBPsole(int n) // tra ve giá tri tong bình phuong so le
{
    int tbp = 0;
    for(int i = 1; i <= n; i+=2) // chi duyet so le
    {
        tbp += i * i;
    }
    return (float)tbp;
    // void thì kh return
    // int thi return ve chinh no
    //float thi return ve ep kieu (float)
}

int TBPsochan(int n) // tra ve giá tri tong bình phuong so chan
{
    int tbp = 0;
    for(int i = 0; i <= n; i+=2) // chi duyet so chan
    {
        tbp += i * i;
    }
    return tbp;
}
int main()
{
   int n;
   int tbp;
   cout<<"nhap vao so n : ";
   cin>>n;
   daysole(n);
   TBPsole(n);
   cout<<endl<<" - Tong binh phuong cac so le la: "<<TBPsole(n);
   daysochan(n);
   cout<<endl<<" - Tong binh phuong cac so chan la: "<<TBPsochan(n);
}