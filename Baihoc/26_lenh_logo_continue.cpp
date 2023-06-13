#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    Nhap:
    cout<<"\n nhap n = ";
    cin>>n;
    if (n<=0) goto Nhap;
    
    cout<<"\n day so le : ";
    for(int i=1;i<=n;i++)
    {
        if (i%2==0) continue;
        cout<<"\n"<<i;
    }
}