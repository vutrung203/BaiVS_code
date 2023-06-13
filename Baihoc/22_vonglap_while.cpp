#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    int tong=0;
    cout<<"nhap vao n :";
    cin>>n;
    int i=0;
    while (i<=n)
    {
        tong = tong+i;
        i++;
    }
    cout<<tong;
}