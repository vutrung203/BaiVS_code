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
    if (ps.mauso==1)
    {
        cout<<ps.tuso;
    }
    else
    {
        cout<<ps.tuso<<"/"<<ps.mauso;
    }
}
phanso conghaips(phanso ps1,phanso ps2)
{
    phanso ketqua;
    ketqua.tuso = ps1.tuso*ps2.mauso + ps2.tuso*ps1.mauso;
    ketqua.mauso = ps1.mauso*ps2.mauso;
    return ketqua;
}
phanso truhaips(phanso ps1,phanso ps2)
{
    phanso ketqua;
    ketqua.tuso = ps1.tuso*ps2.mauso - ps2.tuso*ps1.mauso;
    ketqua.mauso = ps1.mauso*ps2.mauso;
    return ketqua;
}
phanso nhanhaips(phanso ps1,phanso ps2)
{
    phanso ketqua;
    ketqua.tuso = ps1.tuso*ps2.tuso;
    ketqua.mauso = ps1.mauso*ps2.mauso;
    return ketqua;
}
phanso chiahaips(phanso ps1,phanso ps2)
{
    phanso ketqua;
    ketqua.tuso = ps1.tuso*ps2.mauso;
    ketqua.mauso = ps1.mauso*ps2.tuso;
    return ketqua;
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
    cout<<"\t";
    inphanso(ps2); 
    cout<<endl<<"cong 2 phan so : ";
    inphanso(ps1);cout<<" + ";inphanso(ps2);cout<<" = ";inphanso(conghaips(ps1,ps2));
    cout<<endl;
    inphanso(ps1);cout<<" - ";inphanso(ps2);cout<<" = ";inphanso(truhaips(ps1,ps2));
    cout<<endl;
    inphanso(ps1);cout<<" * ";inphanso(ps2);cout<<" = ";inphanso(nhanhaips(ps1,ps2));
    cout<<endl;
    inphanso(ps1);cout<<" : ";inphanso(ps2);cout<<" = ";inphanso(chiahaips(ps1,ps2));

}