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
            //printf("%d\t",a[i][j]);
            cout<<a[i][j]<<" \t";
        }
        cout<<endl;
    }
}
void xoadongmatran(int x[100][100],int &m , int n, int k)
{
    if (k<0||k>=m)
    return;
    for (int i = k; i < m-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x[i][j]=x[i+1][j];
        }
    }
    m = m-1;
}
void xoacotmatran(int x[100][100],int m , int &n, int k)
{
    if (k<0||k>=n)
    return;
    for (int i = 0; i < m; i++)
    {
        for (int j = k; j < n-1; j++)
        {
            x[i][j]=x[i][j+1];
        }
    }
    n = n-1;
}
int main()
{
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    //xoadongmatran(a,m,n,1);
    //xuatmatran(a,m,n);
    xoacotmatran(a,m,n,1);
    xuatmatran(a,m,n);
}