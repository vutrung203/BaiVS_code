#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int kiem_tra_snt(int x)
{
    if(x<=1)
    return 0;
    for (int i=2;i<=x-1;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"nhap vao n = ";
    cin>>n;
    int kt = kiem_tra_snt(n);
    if(kt==1)
    {
        cout<<"la so nguyen to";
    }
    else
    {
        cout<<"kh phai so nguyen to";
    }
}