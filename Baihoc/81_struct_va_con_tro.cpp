#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;

struct phanso
{
    int tuso;
    int mauso;
};
void rutgon(phanso *ps)
{
    int a=ps->tuso;
    int b=ps->mauso;
    a=abs(a);
    b=abs(b);

    int USCLN = 1;
    //TH1
    if(a==0 || b==0)
    {
        USCLN =(a+b);
    }
    else
    {
        //TH2
        while (a!=b)
        {
            if(a>b)
            {
                a = a-b;
            }
            else
            {
                b = b-a;
            }
        }
        USCLN = a;
    }
    ps->tuso/=USCLN;
    ps->mauso/=USCLN;
}
void nhapphanso(phanso *ps)
{
    cout<<endl<<"nhap vao tu so : ";
    cin>>ps->tuso;
    do
    {
         cout<<endl<<"nhap vao tu so : ";
         cin>>ps->mauso;
    } while (ps->mauso==0);
}
void inphanso (phanso ps)
{
    if (ps.mauso<0)
    {
        ps.tuso*=-1;
        ps.mauso*=-1;
    }
    rutgon(&ps);
    cout<<endl<<ps.tuso<<"/"<<ps.mauso<<"\t";
}
int main()
{
    phanso ps1,ps2;
    cout<<endl<<"phan so thu nhat : ";
    nhapphanso(&ps1);
    cout<<endl<<"phan so thu hai : ";
    nhapphanso(&ps2);
    cout<<endl<<"phan so vua nhap la : ";
    inphanso(ps1);
    inphanso(ps2); 
}