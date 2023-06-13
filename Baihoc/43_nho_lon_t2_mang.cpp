#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;

int a[100];
int n;
void nhapmang(int x[100], int &n)
{
    cout<<"nhap vao so phan tu :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"x["<<i<<"] : ";
        cin>>x[i];
    }
}
void xuatmang(int x[100], int n)
{
    cout<<endl<<"gia tri mang :";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<x[i];
    }
}
int timminthu2(int x[100], int &n)
{
    int min = INT_MAX;
    int min_2 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (x[i]<min)
        min=x[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(x[i]==min)
        {
            continue;
        }
        else
        {
            if (x[i]< min_2)
            {
                min_2 = x[i];
            }
        }
    }
    return min_2; 
}
int timmaxthu2(int x[100], int &n)
{
    int max = INT_MIN;
    int max_2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (x[i]>max)
        max=x[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(x[i]==max)
        {
            continue;
        }
        else
        {
            if (x[i]> max_2)
            {
                max_2 = x[i];
            }
        }
    }
    return max_2; 
}
int main()
{
    nhapmang(a,n);
    xuatmang(a,n);
    cout<<endl<<"min_2 = "<<timminthu2(a,n);
    cout<<endl<<"max_2 = "<<timmaxthu2(a,n);
}
