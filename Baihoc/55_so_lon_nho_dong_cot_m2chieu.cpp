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
int timmindong(int x[100][100],int m , int n,int dong)
{
    int min=x[dong][0];
    for (int j = 0; j < n; j++)
    {
        if (min>x[dong][j])
        {
            min = x[dong][j];
        }
    }
    return min;
}
int timmaxdong(int x[100][100],int m , int n,int dong)
{
    int max=x[dong][0];
    for (int j = 0; j < n; j++)
    {
        if (max<x[dong][j])
        {
            max = x[dong][j];
        }
    }
    return max;
}
int timmincot(int x[100][100],int m,int n,int cot)
{
    int min = x[0][cot];
    for (int i = 0; i < m; i++)
    {
        if (min>x[i][cot])
        {
            min = x[i][cot];
        }
    }
    return min;
}
int timmaxcot(int x[100][100],int m,int n,int cot)
{
    int max = x[0][cot];
    for (int i = 0; i < m; i++)
    {
        if (max<x[i][cot])
        {
            max = x[i][cot];
        }
    }
    return max;
}
int main()
{
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    cout<<"min cot 0 la : "<<timmincot(a,m,n,0)<<endl;
    cout<<"max cot 2 la : "<<timmaxcot(a,m,n,2)<<endl;
    cout<<"min dong 0 la : "<<timmindong(a,m,n,0)<<endl;
    cout<<"max dong 2 la : "<<timmaxdong(a,m,n,2);
}
