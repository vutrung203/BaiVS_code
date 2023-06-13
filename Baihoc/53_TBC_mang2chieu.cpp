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
double trungbinhcongtatca(int x[100][100],int m , int n)
{
    if (m<=0||n<=0)
    return 0;
    int tong=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tong+=x[i][j];
        }
    }
    double trungbinhcong=(double)tong/(m*n);
    return trungbinhcong;
}
double trungbinhcongchiahetcho5(int x[100][100],int m , int n)
{
    if (m<=0||n<=0)
    return 0;
    int tongchiahetcho5=0;
    int soluongchiahetcho5=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j]%5==0)
            {
                soluongchiahetcho5++;
                tongchiahetcho5+=x[i][j];
            }
        }
    }
    double trungbinhcong=0;
    if(soluongchiahetcho5>0)
    trungbinhcong=(double)tongchiahetcho5/soluongchiahetcho5;
    return trungbinhcong;
}
int main()
{
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    cout<<"TBC tat ca la : "<<trungbinhcongtatca(a,m,n)<<endl;
    cout<<"TBC chia het cho 5 la : "<<trungbinhcongchiahetcho5(a,m,n);
    
    
}