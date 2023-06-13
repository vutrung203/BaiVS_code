#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

int a[100][100];
int m,n;

void nhapmatran(int x[100][100],int &n)
{
    do
    {
        cout<<"nhap vao n : ";
        cin>>n;
    } while (n<=0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"x ["<<i<<"] "<<"["<<j<<"] = ";
            cin>>x[i][j];
        }
    }
}
void xuatmatran(int x[100][100],int n)
{
    cout<<endl<<"mang"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int mod(int x , int y )
{
    int r = x%y;
    return r<0 ? r+y : r; 
}
int tinhdet(int x[100][100], int n)
{
    int tong_1=0;
    int tong_2=0;
    int k=0;
    for (int i = 0; i < n; i++)
    {
        int k=0;
        for (int l = 0; l < n; l++)
        {
            int temp=1;
            for (int t=0; t < n; t++)
            {
                temp = temp*x[mod((k+t),n)][mod((l+t),n)];
            }
            tong_1 = tong_1+temp;
        }
        //int k=0;
        for (int l = 0; l < n; l++)
        {
            int temp=1;
            for (int t=0; t < n; t++)
            {
                temp = temp*x[mod((k+t),n)][mod((l-t),n)];
            }
            tong_2 = tong_2+temp;
        }
        return tong_1-tong_2;
    }
}
int main()
{
    nhapmatran(a,n);
    xuatmatran(a,n);
    cout<<"det(x) = "<<tinhdet(a,n);
}