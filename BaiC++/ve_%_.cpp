using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
class Ve
{
public:
 int Giagoc;
 char Ngay[30];
 void nhap();
 void xuat();
};
class VeNL:public Ve
{
 int Giam;
 float Giave;
public:
 void nhap();
 void xuat();
};
class VeTE:public Ve
{
 int Giam;
 float Giave;
public:
 void nhap();
 void xuat();
};
void Ve::nhap()
{
 cout<<"Gia goc: ";cin>>Giagoc;
 cin.ignore();
 cout<<"Ngay: ";gets(Ngay);fflush(stdin);
}
void Ve::xuat()
{
 cout<<"Gia goc: "<<Giagoc<<endl;
 cout<<"Ngay: "<<Ngay<<endl;
}
void VeNL::nhap()
{

 Ve::nhap();
 cout<<"Giam: ";cin>>Giam;fflush(stdin);
 Giave=Giagoc-(Giagoc*Giam)/100;
 }
void VeNL::xuat()
{
    cout<<"\nIn Thong tin ve nguoi lon\n";
 Ve::xuat();
 cout<<"Giam: "<<Giam<<"%"<<endl;
 cout<<"Gia ve: "<<Giave<<endl;
}
void VeTE::nhap()
{
 Ve::nhap();
 cout<<"Giam: ";cin>>Giam;
 Giave=Giagoc-(Giagoc*Giam)/100;
}
void VeTE::xuat()
{
    cout<<"\nIn Thong tin ve tre em\n";
 Ve::xuat();
 cout<<"Giam: "<<Giam<<"%"<<endl;
 cout<<"Gia ve: "<<Giave<<endl;
}
int main()
{
VeNL x;
VeTE y;
cout<<"========================\n";
 cout<<"Nhap Ve nguoi lon:\n";
 x.nhap();
 x.xuat();
 cout<<"========================\n";
 cout<<"Nhap Ve tre em:\n";
 y.nhap();
 y.xuat();
_getch();
}
