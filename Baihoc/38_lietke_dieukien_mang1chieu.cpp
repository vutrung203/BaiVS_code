#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int thoadieukien(int x)
{
    return (x%2==0 && x%3==0);
}
int thoadieukiensnt(int x)
{
    if (x<1)
    return 0;
    for (int i = 2; i < sqrt(x); i++)
    {
        if(x%i==0);
        return 0;
    }
    return 1;
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
    cout<<"cac so chan chia het cho 3 :";;
    for (int i = 0; i < n; i++)
    {
        if (thoadieukien(a[i]))
        {
            cout<<" "<<a[i];
        }
        
    }
    cout<<endl<<"cac so nguyen to :";
    for (int i = 0; i < n; i++)
    {
        if (thoadieukiensnt(a[i]))
        {
            cout<<" "<<a[i];
        }
        
    }
}