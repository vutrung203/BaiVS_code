#include<iostream>
#include<conio.h>
#include"math.h"
using namespace std;

void daysole(int a, int n)
{
    cout<<"day so le la : ";
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            cout<<i<<" ";
        }
    }
}

void daysochan(int a, int n)
{
    cout<<endl<<"day so chan la : ";
    for(int i = 0; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            cout<<i<<" ";
        }
    }
}
float TBCle(int a,int n)
{
    int tong = 0;
    int dem=0;
    for (int i = 1; i <= n; i++)
    {
        if(i % 2==1)
		{
			tong+=i;
			dem++;
		}
    }
    return (float)tong/dem;
}

float TBCchan(int a,int n)
{
    int tong = 0;
    int dem=0;
    for (int i = 0; i <=n; i++)
    {
        if(i % 2==0)
		{
			tong+=i;
			dem++;
		}
    }
    return (float)tong/dem;
}
int main()
{
   int n;
   int a;
   int tbc;
   cout<<"nhap vao so n : ";
   cin>>n;
   daysole(a,n);
   cout<<endl<<"TBC le la : "<<TBCle(a,n);
   daysochan(a,n);
   cout<<endl<<"TBC chan la : "<<TBCchan(a,n);

}