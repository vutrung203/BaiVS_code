#include<iostream>
#include<stdio.h>
using namespace std;

void printnhiphan(int x)
{
    if (x==0)
    return;
    else
    {
        int r=x%2;
        printnhiphan(x/2);
        cout<<r;
    }
}
int main()
{
    int n;
    do
    {
        cout<<"nhap vao n = ";
        cin>>n;
    }
    while(n<0);
    printnhiphan(n);
}
