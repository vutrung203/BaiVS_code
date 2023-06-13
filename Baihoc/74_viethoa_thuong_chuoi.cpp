#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

void my_strupr(char x[])
{
    for (int i = 0; i < strlen(x); i++)
    {
        if (x[i]>97 && x[i]<=122)
        {
            x[i] = x[i]-32;
        }
    }
}
void my_strlwr(char x[])
{
    for (int i = 0; i < strlen(x); i++)
    {
        if (x[i]>65 && x[i]<=90)
        {
            x[i] = x[i]+32;
        }
    }
}

int main ()
{
    char s[50] = "";
    cout<<"nhap s = ";
    fgets(s,sizeof(s),stdin);
    cout<<"s = "<<s;
    //strupr(s);
    my_strupr(s);
    cout<<"chuyen sang viet hoa s = "<<s<<endl;
    //strlwr(s);
    my_strlwr(s);
    cout<<"chuyen sang viet thuong s = "<<s;
}