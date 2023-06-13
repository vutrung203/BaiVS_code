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
            cout<<"x ["<<i<<"] "<<"["<<j<<"] ";
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
int kiemtradoixungquaduongcheochinh(int x[100][100],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j]!=x[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}
int kiemtradoixungquaduongcheophu(int x[100][100],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j]!=x[n-1-j][n-1-i])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    nhapmatran(a,n);
    xuatmatran(a,n);
    cout<<((kiemtradoixungquaduongcheochinh(a,n)==1?"mang doi xung qua duong cheo chinh":"mang kh doi xung qua duong cheo chinh"))<<endl;
    //printf("%s",(kiemtradoixungquaduongcheochinh(a,n)==1?"mang doi xung qua duong cheo chinh":"mang kh doi xung qua duong cheo chinh"));
    cout<<((kiemtradoixungquaduongcheophu(a,n)==1?"mang doi xung qua duong cheo phu":"mang kh doi xung qua duong cheo phu"));
}