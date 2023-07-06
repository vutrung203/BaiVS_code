#include<iostream>
#include"bits/stdc++.h"
#include<math.h>
using namespace std;

int main()
{
    int a = 2;
    int b = 10;
    int c = 16;
    // abs(x) : gia tri tuyet doi
    int x = -100;
    int y = abs(x);
    cout<<"gia tri tuyet doi : "<<y<<endl;
    
    //res = 2^10
    int res = pow(a,b); 
    cout<<"so mu : "<<res<<endl;
    
    //sqrt(n) : tinh can bac 2
    int can = sqrt(c);
    cout<<"can bac 2 : "<<can<<endl;

    //rouhd(a) : lam tron
    float d = 2.5;// 1 >= 0.5 <= 2
    int e = round(d);
    cout<<"lam tron : "<<e<<endl;
    
    //if , 0 = false 1 = true
    int n;
    cout<<"nhap N : ";
    cin>>n;
    if ((n >= 100)&&(n <= 500))
    {
        cout<<"so chan"<<endl;
    }

    // if else 
    if (n%2==0)
    {
        cout<<"so chan"<<endl;
    }
    else
    {
        cout<<"so le"<<endl;
    }
    
    // else if
    if (n==1)
    {
        cout<<"CN"<<endl;
    }
    else if (n==2)
    {
        cout<<"thu 2"<<endl;
    }
    else
    {
        cout<<"kh co"<<endl;
    }
    
    // switch break
    int day=4;
    switch (day)
    {
        case 1:
        cout<<"t2"<<endl;
        break;
        case 2:
        cout<<"t3"<<endl;
        break;
    default:
    cout<<"kh du lieu"<<endl;
        break;
    }
}