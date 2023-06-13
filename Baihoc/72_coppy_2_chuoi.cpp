#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

void my_strcpy(char x1[],char x2[])
{
    size_t len2 = strlen(x2);
    for (int i = 0; i < len2; i++)
    {
        x1[i]=x2[i];
    }
    x1[len2]='\0';
}

int main()
{
    char s_1[50]= "xin chao";
    char s_2[50];

    cout<<endl<<"s_1 = "<<s_1;
    cout<<endl<<"s_2 = "<<s_2;

    //strcpy(s_2,s_1);
    my_strcpy(s_2,s_1);
    cout<<endl<<"-------";
    cout<<endl<<"s_1 = "<<s_1;
    cout<<endl<<"s_2 = "<<s_2;
}