//bai 67+68 khac phuc loi kh nhap dc chuoi
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
using namespace std;

int main ()
{
    int tuoi;
    char ten[50];
    cout<<"nhap tuoi cua bn : ";
    cin>>tuoi; getchar();
    
    cout<<"nhap ten cua bn : ";
    //cin>>ten;
    fgets(ten, sizeof(ten),stdin);
    //cout<<endl<<"ten da nhap la : "<<ten;
    
    cout<<endl<<"ten da nhap la : "; puts(ten);
    cout<<"tuoi : "<<tuoi;  
}