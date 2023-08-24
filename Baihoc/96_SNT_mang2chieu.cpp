#include<iostream>
#include<conio.h>
#include"math.h"
using namespace std;

int a[100][100];
int m,n;

void nhapmatran(int x[100][100],int &m,int &n)
{
    do
    {
        cout<<"nhap vao m va n : ";// m : dong // n : cot
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
//a) tim phan tu lon nhat cung chi so
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
    cout<<"max = "<<max<<endl<<"ma tran cung chi so la : ";
    return max;
}
//b)tim va in ra snt matran
int ktrsnt(int n)
{
    if(n<2)
        return 0;
    else{   
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
void insonguyento(int x[100][100],int m,int n)
{
    cout<<"\nCac so nguyen to co trong mang: "<<endl;
    for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(ktrsnt(x[i][j]))
            {
                cout<<x[i][j]<<"  ";
            }
        }
    }
}
/*// mang 1 chieu
int ktrant(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
 
void insonguyento(int a[], int n){
    cout<<"\nCac so nguyen to co trong mang: "<<endl;
    for(int i=0;i<n;i++)
        if(ktrant(a[i]))
            cout<<a[i]<<"  ";
}
*/
//c) sap xep thu tu cua cot theo chieu tang dan
void sapxeptang(int x[100][100],int m,int n)
{
    int i, j, k;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            for (k = i + 1; k < m; k++)
            {
                if (x[i][j] > x[k][j])
                {
                    int temp = x[i][j];
                    x[i][j] = x[k][j];
                    x[k][j] = temp;
                }
            }
        }
    }
}
int main()
{
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    
    cout<<timmax(a,m,n)<<endl;

    insonguyento(a,m,n);
    cout<<endl<<"-------------";
    //tangtheocot(a,m,n);
    xuatmatran(a,m,n);
}
