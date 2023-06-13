#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

void swap_thamtri(int a, int b)
{
    int tam=a;
    a=b;
    b=tam;
}
void swap_thamchieu(int &a , int &b)
{
    int tam=a;
    a=b;
    b=tam;
}
int main()
{
    int a,b;
    cout<<"nhap vao a va b : ";
    cin>>a>>b;
    cout<<"\ngia tri ban dau "<<a<<" "<<b;
    swap_thamtri(a,b);
    cout<<"\nhoan doi - truyen tham tri "<<a<<" "<<b ;
    swap_thamchieu(a,b);
    cout<<"\nhoan doi - truyen tham chieu "<<a<<" "<<b ;
}