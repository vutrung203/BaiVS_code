#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

union ngay_1
{
    int ngay;
    int thang;
    int nam;
}ungay;
struct ngay_2
{
    int ngay;
    int thang;
    int nam;
}sngay;
int main()
{
    cout<<"kich co kieu Union = "<<sizeof(ungay)<<" bytes"<<endl;
    cout<<"kich co kieu struct = "<<sizeof(sngay)<<" bytes"<<endl;
    ngay_1 n1;
    n1.ngay = 15;
    n1.thang = 2;
    n1.nam = 2022;
    cout<<"su dung kieu Union "<<endl;
    cout<<n1.ngay<<"/"<<n1.thang<<"/"<<n1.nam<<endl;

    ngay_2 n2;
    n2.ngay = 15;
    n2.thang = 2;
    n2.nam = 2022;
    cout<<"su dung kieu struct "<<endl;
    cout<<n2.ngay<<"/"<<n2.thang<<"/"<<n2.nam<<endl;
}