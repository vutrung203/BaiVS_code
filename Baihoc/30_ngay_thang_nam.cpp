#include<iostream>
#include<stdio.h>
using namespace std;

int songaycuathang(int thang, int nam)
{
    switch(thang)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            return 31;
            case 4:
            case 6:
            case 9:
            case 11:
            return 30;
            case 2:
            return ((nam%400==0)||(nam%4==0 && nam%100 !=0))?29:28;
            default:
            return -1;
        }
}
int ngaytrongnam(int ngay,int thang,int nam)
{
    int ntn = 0;
    int i;
    for( i=1;i<thang;i++)
    {
        ntn+=songaycuathang(i,nam);
    }
    ntn+=ngay;
    return ntn;
}
void inNgaytrcdo(int ngay, int thang , int nam)
{
    if(ngay==1)
    {
        if(thang==1)
        {
            ngay=31;
            thang=12;
            nam--;
        }
        else
        {
            thang--;
            ngay=songaycuathang(thang,nam);
        }
    }
    else
    {
        ngay--;
    }
    printf("\nngay truoc do : %d/%d/%d",ngay,thang,nam);
}
void inNgaykedo(int ngay, int thang , int nam)
{
    int nct = songaycuathang(thang,nam);
    if(ngay==nct)
    {
        if(thang==12)
        {
            ngay=1;
            thang=1;
            nam++;
        }
        else
        {
            ngay=1;
            thang++;
        }
    }
    else
    {
        ngay++;
    }
    printf("\nngay ke do : %d/%d/%d",ngay,thang,nam);
}
int main()
{
    int ngay,thang,nam;
    do
    {
        cout<<"\nnhap vao ngay thang nam : ";
        cin>>ngay>>thang>>nam;
    }
    while(ngay<1 || ngay>31 || thang<1 || thang>12 || nam<1);
    cout<<"\nso ngay cua thang : "<<songaycuathang(thang,nam);
    cout<<"\nngay trong nam : "<<ngaytrongnam(ngay, thang, nam);
    inNgaytrcdo(ngay,thang,nam);
    inNgaykedo(ngay,thang,nam);
}