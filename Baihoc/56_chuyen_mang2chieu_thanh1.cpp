#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

int a[100][100];
int b[1000];
int m,n,k;

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
void chuyenmatranthanhmang1chieu(int x[100][100],int m ,int n, int y[10000],int &k)
{
    int index=0;
    k = m*n;;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            y[index]=x[i][j];
            index++;
        }
        
    }
}
void xuatmang1chieu(int x[1000],int n)
{
    cout<<endl<<"xuat mang 1 chieu : ";
    for (int i = 0; i < n; i++)
    {
        cout<<x[i]<<" ";
    }
    
}
int main()
{
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    chuyenmatranthanhmang1chieu(a,m,n,b,k);
    xuatmang1chieu(b,k);
}