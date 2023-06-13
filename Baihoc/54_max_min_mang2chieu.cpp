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
int timmax(int x [100][100],int m , int n)
{
    int max=x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max<x[i][j])
            {
                max=x[i][j];
            }
        }
    }
    return max;
}
int timmin(int x [100][100],int m , int n)
{
    int min=x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (min>x[i][j])
            {
                min=x[i][j];
            }
        }
    }
    return min;
}
int main()
{
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    cout<<"min = "<<timmin(a,m,n)<<endl;
    cout<<"max = "<<timmax(a,m,n);
}