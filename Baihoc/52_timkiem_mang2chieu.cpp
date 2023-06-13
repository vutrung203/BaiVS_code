#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

int a[100][100];
int m,n;

void nhapmatran(int x[100][100],int &m,int &n)
{
    do
    {
        cout<<"nhap vao m va n : ";
        cin>>m>>n;
    } while (m<=0||n<=0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"x ["<<i<<"] "<<"["<<j<<"] ";
            cin>>x[i][j];
        }
    }
}
void xuatmatran(int x[100][100], int m,int n)
{
    cout<<endl<<"mang"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int timkiem(int x[100][100],int m ,int n,int giatritimkiem)
{
    int kq=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j]==giatritimkiem)
            {
                kq=1;
            }
            
        }
        
    }
    return kq;
}
void thuchientimkiem(int x[100][100],int m ,int n)
{
    int luachon=0;
    do
    {
        int giatritimkiem;
        cout<<endl<<"nhap vao gia tri can tim : ";
        cin>>giatritimkiem;
        int kq = timkiem(x,m,n,giatritimkiem);
        if (kq)
        {
            cout<<"tim thay gia tri can tim";
        }
        else
        {
            cout<<"kh tim thay";
        }
        cout<<endl<<"nhap so bat ky de tiep tuc"<<endl<<"nhap 0 de thoat ";
        cin>>luachon;
    } while (luachon!=0); 
}
int main ()
{
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    thuchientimkiem(a,m,n);
}