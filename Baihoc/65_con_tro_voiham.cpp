#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

// truyen tham tri
void swap_1(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}
//truyen tham chieu
void swap_2(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
//con tro
void swap_3(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main ()
{
    int a = 5;
    int b = 10;
    cout<<"truoc khi swap_1 : a = "<<a<<" va b = "<<b<<endl;
    swap_1(a,b);
    cout<<"sau khi swap_1 : a = "<<a<<" va b = "<<b<<endl;
    
    cout<<"truoc khi swap_2 : a = "<<a<<" va b = "<<b<<endl;
    swap_2(a,b);
    cout<<"sau khi swap_2 : a = "<<a<<" va b = "<<b<<endl;
    
    cout<<"truoc khi swap_3 : a = "<<a<<" va b = "<<b<<endl;
    swap_3(&a,&b);
    cout<<"sau khi swap_3 : a = "<<a<<" va b = "<<b<<endl;
}