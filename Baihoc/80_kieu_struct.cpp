#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};
void inputdate(struct date &d)
{
    cout<<endl<<"nhap vao ngay : ";
    cin>>d.day;

    cout<<endl<<"nhap vao thang : ";
    cin>>d.month;

    cout<<endl<<"nhap vao nam : ";
    cin>>d.year;
}
void printdate(struct date d)
{
    cout<<d.day<<"/"<<d.month<<"/"<<d.year<<endl;
}
int checkdate(struct date d)
{
    if (d.day<0 || d.month<0 || d.year<0)
    return 0;

    if(d.month==2)
    {
        if (d.day>28)
        {
            return 0;
        }
    }
    if(d.month==1 || d.month==3 || d.month==5 || d.month==7 || d.month==8 || d.month==10 || d.month==12 )
    {
        if (d.day>31)
        {
            return 0;
        }
    }
    if(d.day>30)
    {
        return 0;
    }
    return 1;
}
int main ()
{
    struct date mydate;
    inputdate(mydate);
    cout<<endl<<"--------------"<<endl;
    printdate(mydate);
    cout<<"ktr ngay hop le  : "<<((checkdate(mydate)==1?"hop le":"kh hop le"));
}
