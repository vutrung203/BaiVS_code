#include<iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    float xa,ya,xb,yb,xc,yc;
    float AB,BC,CA;
    float chuvi,dientich,p;
    cout<<"\nnhap dinh A";
    cin>>xa>>ya;
    cout<<"\nnhap dinh B";
    cin>>xb>>yb;
    cout<<"\nnhap dinh C";
    cin>>xc>>yc;

    AB = sqrt(pow(xa-xb,2) + pow(ya-yb,2));
    BC = sqrt(pow(xb-xc,2) + pow(yb-yc,2));
    CA = sqrt(pow(xc-xa,2) + pow(yc-ya,2));
    printf("\nAB = %.2f, BC = %.2f, CA = %.2f",AB, BC, CA);

    if(AB+BC > CA && AB+CA > BC && BC+CA > AB)
    {
        cout<<"\nABC tao thanh tam giac";
        if(AB == BC || AB == CA || BC == CA)
        {
            cout<<"\nABC la tam giac can";
        }
        else
        {
            cout<<"\nABC khong tao thanh tam giac can";
        }
        chuvi = AB + BC + CA;
        printf("\n chu vi tam giac ABC la : %.2f",chuvi);
        p = chuvi/2;
        dientich = sqrt(p*(p-AB)*(p-BC)*(p-CA));
        printf("\n dien tich tam giac ABC la : %.2f",dientich);
    }
    else
    {
        cout<<"\nABC kh tao thanh tam giac";
    }
    
}