#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

char* my_strchr(char x1[],char tk)
{
   for (int i = 0; i < strlen(x1) ; i++)
   {
       if (x1[i]==tk)
       {
            return &x1[i];
       }
   }
}
int main()
{
    char x1[50]="trung.vn";
    char *x2;
    x2 = my_strchr(x1,'.');
    cout<<"x1 = "<<x1<<endl;    
    cout<<"x2 = "<<x2<<endl;
}