#include<iostream>
#include<stdio.h>
using namespace std;

int fibonnaci(int x)
{
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else if (x==2)
    return 1;
    else
    return fibonnaci(x-1)+fibonnaci(x-2);
}
int main()
{
    int n;
    do
    {
        cout<<"nhap vao so nguyen n = ";
        cin>>n;
    }
    while(n<0);
    //cout<<"fibonnaci "<<n<<" = "<<fibonnaci(n);
    cout << "Fibonaci (" << n << ")" << "=" << fibonnaci(n) << endl;
}