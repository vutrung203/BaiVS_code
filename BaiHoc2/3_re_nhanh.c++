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
    if (100>50)
    {
        cout<<"xin chao";
    }
    
}