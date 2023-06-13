#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int ktrdoixung(char x[])
{
    size_t len = strlen(x);
    for (int i = 0; i < len/2; i++)
    {
        if (x[i]!=x[len-i-1])
        {
            return 0;
        }
    }
    return 1;
}
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
    char s[50];
    cout<<"nhap s = ";
    fgets(s,sizeof(s),stdin);
    xoaxuongdong(s);
    if (ktrdoixung(s))
    {
        cout<<"day la chuoi doi xung";
    }
    else
    {
        cout<<"day la chuoi kh doi xung";
    }
    
}