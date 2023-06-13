#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    int thang,nam;
    cout<<"nhap thang";
    cin >>thang;
    cout<<"nhap nam";
    cin>>nam;

    switch(thang)
    {
        case 1:
        case 3:  
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << "co 31 ngay";
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        cout << "co 30 ngay";
        break;

        case 2:
        if((nam%400==0) || (nam%4==0 && nam%100!=0))
        // tình huống 1 nam%400==0 năm nhuận
        // tình huống 2 nnam%4==0 && nam%100!=0 (năm chia hết 4 nhưng kh hết 100 )
        {
            cout<<"co 29 ngay";
        }
        else
        {
            cout<<"co 28 ngay";
        }
        break;
        default:
        cout<<"bn nhap chua dung"<< endl;
    }
}