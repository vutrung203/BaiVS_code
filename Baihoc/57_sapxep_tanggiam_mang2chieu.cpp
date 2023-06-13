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
    cout<<endl<<"mang "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void sapxeptang(int x[100][100],int m,int n)
{
    int k=m*n;
    for (int i = 0; i < k-1; i++)
    {
        for (int j = i+1; j < k; j++)
        {
            if (x[i/n][i%n]>x[j/n][j%n])
            {
                int temp = x[i/n][i%n];
                x[i/n][i%n]=x[j/n][j%n];
                x[j/n][j%n]=temp;
            }
        }
    }
}
void sapxepgiam(int x[100][100],int m,int n)
{
    int k=m*n;
    for (int i = 0; i < k-1; i++)
    {
        for (int j = i+1; j < k; j++)
        {
            if (x[i/n][i%n]<x[j/n][j%n])
            {
                int temp = x[i/n][i%n];
                x[i/n][i%n]=x[j/n][j%n];
                x[j/n][j%n]=temp;
            }   
        }   
    }
}
int main()
{
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    sapxepgiam(a,m,n);
    cout<<endl<<"mang sap xep giam la : ";
    xuatmatran(a,m,n);
    sapxeptang(a,m,n);
    cout<<endl<<"mang sap xep tang la : ";
    xuatmatran(a,m,n);
}