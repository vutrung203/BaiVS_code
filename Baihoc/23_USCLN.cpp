#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b,USCLN;
    cout<<"nhap 2 so nguyen a va b: ";
    cin>>a>>b;

    if(a==0 || b==0)
    {
        USCLN =(a+b);
    }
    else
    {
        while (a!=b)
        {
            if(a>b)
            {
                a = a-b;
            }
            else
            {
                b = b-a;
            }
        }
        USCLN = a;
    }
    cout<<USCLN;
}
