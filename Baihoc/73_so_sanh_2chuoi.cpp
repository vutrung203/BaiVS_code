#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int my_strcmp(char x1[],char x2[])
{
    int ketqua=0;
    size_t len1 = strlen(x1);
    size_t len2 = strlen(x2);
    size_t min = len1<len2?len1:len2;
    for (int i = 0; i < min; i++)
    {
        ketqua = x1[i]-x2[i];
        if (ketqua!=0)
        {
            break;
        }
    }
    if (ketqua>0)
    return 1;
    else if (ketqua<0)
        return-1;
    else
        return 0;
}

int main()
{
    char s_1[50];
    char s_2[50];

    cout<<endl<<"nhap vao s_1 = ";
    fgets(s_1,sizeof(s_1),stdin);
    cout<<endl<<"nhap vao s_1 = ";
    fgets(s_2,sizeof(s_2),stdin);
    cout<<"ket qua so sanh : "<<strcmp(s_1,s_2)<<endl;
    cout<<"--------------"<<endl;
    cout<<"ket qua so sanh* : "<<my_strcmp(s_1,s_2)<<endl;

}