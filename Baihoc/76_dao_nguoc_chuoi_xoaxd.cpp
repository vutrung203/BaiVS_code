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
void my_strrew(char x[])
{
    size_t len = strlen(x);
    for (int i = 0; i < len/2; i++)
    {
        char temp = x[i];
        x[i] = x[len-i-1];
        x[len-i-1] = temp;
    }
}
int main()
{
    char s[50]="";
    cout<<"nhap s = ";
    fgets(s,sizeof(s),stdin);
    xoaxuongdong(s);
    cout<<endl<<"s = "<<s;
    //strrev(s);
    my_strrew(s);
    cout<<endl<<"s = "<<s;
}
