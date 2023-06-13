#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int kiemtrasochinhphuong(int x)
{
    int kc = (int)sqrt(x);
    if(pow(kc, 2)==x)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    do
    {
        cout<<"nhap so n = ";
        cin>>n;
    }
    while(n<1);
    for(int i=2;i<=n;i++)
    {
        //int kt = kkiemtrasonguyento(i);
        if(kiemtrasochinhphuong(i))
        {
            cout<<" "<<i;
        }
    }
}