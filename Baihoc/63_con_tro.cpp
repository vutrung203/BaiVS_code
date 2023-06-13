#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

int main()
{
    // dia chi bien
    int var;
    cout<<"nhap var = ";
    cin>>var;
    cout<<endl<<"gia tri cua var = "<<var;
    cout<<endl<<"dia chi bien var trong bo nho la : "<<var;
    
    int *pc,c;
    c=5;
    pc = &c;
    cout<<endl<<"gia tri cua c la : "<<*pc;
    cout<<endl<<"dia chi cua bien c la : "<<pc;
    
    *pc=1;
    cout<<endl<<"gia tri cua c la : "<<c;
    cout<<endl<<"dia chi cua *pc la : "<<*pc;
}