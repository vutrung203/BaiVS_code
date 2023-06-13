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
void thaydoigiatri2dong(int x[100][100],int m, int n,int k, int y)
{
    for (int i = 0; i < n; i++)
    {
        int temp=x[k][i];
        x[k][i]=x[y][i];
        x[y][i]=temp;
    }
}
void thaydoigiatri2cot(int x[100][100],int m, int n,int k, int y)
{
    for (int i = 0; i < m; i++)
    {
        int temp=x[i][k];
        x[i][k]=x[i][y];
        x[i][y]=temp;
    }   
}
int main()
{
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    //thaydoigiatri2dong(a,m,n,1,2);
    //xuatmatran(a,m,n);
    thaydoigiatri2cot(a,m,n,1,2);
    xuatmatran(a,m,n);
}