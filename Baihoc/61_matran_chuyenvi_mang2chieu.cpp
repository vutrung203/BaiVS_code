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
            cout<<"x ["<<i<<"] "<<"["<<j<<"] = ";
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
void timmatranchuyenvi(int x[100][100],int m, int n)
{
    int y[100][100];
    int k = n;//dong
    int l = m;//cot
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            y[i][j]=x[j][i];
        }
    }
    cout<<endl<<"ma tran chuyen vi : "<<endl;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout<<y[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    timmatranchuyenvi(a,m,n);
}