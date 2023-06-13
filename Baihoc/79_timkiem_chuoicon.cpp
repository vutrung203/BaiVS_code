#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

void xoaxuongdong(char x[])
{
    // trung \n\0 => trung \0\0
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1]='\0';
    }
}
int main()
{
    char chuoi[50];
    char chuoi_con[50];

    cout<<"nhap vao chuoi : ";
    fgets(chuoi,sizeof(chuoi),stdin);
    xoaxuongdong(chuoi);

    cout<<"nhap chuoi can tim : ";
    fgets(chuoi_con,sizeof(chuoi_con),stdin);
    xoaxuongdong(chuoi_con);

    char *kq=strstr(chuoi,chuoi_con);
    if (*kq!=NULL)
    {
        cout<<"tim thay chuoi con"<<endl;
        cout<<kq;
    }
    else
    {
        cout<<"tim kh thay chuoi con";
    }
}