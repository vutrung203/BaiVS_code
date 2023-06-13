// bai 69+70 xoa ky tu xuong dong \n
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int my_strlen(char x[])
{
    int count = 0;
    while (x[count]!='\0')
    {
        count++;
    }
    return count++;
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
int main ()
{
    //char ten[50] = "trung";
    char ten[50];
    cout<<"nhap ten cua bn : ";
    fgets(ten,sizeof(ten),stdin);
    xoaxuongdong(ten);

    cout<<endl<<"ten cua bn la : "<<ten;
    cout<<endl<<"do dai ten = "<<strlen(ten); 
    
    cout<<endl<<"my_strlen : ";
    cout<<endl<<"ten cua bn la : "<<ten;
    cout<<endl<<"do dai ten = "<<strlen(ten); 
}