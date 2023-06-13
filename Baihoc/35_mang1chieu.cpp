#include<iostream>
#include<stdio.h>
using namespace std;

//int mang()
int main()
{
    // khai bao mang
    int a[10];
    float b[100];
    char c[1000];

    //khai bao mang va gan gia tri ban dau
    int x[10]={};
    int y[3]={9,6,15};
    
    // gan du lieu cho mang
    // mang bat dau tu vi tri so 0
    y[1]=10;
    cout<<"\n0 "<<"- "<<y[0];
    cout<<"\n1 "<<"- "<<y[1];
    cout<<"\n2 "<<"- "<<y[2];
}