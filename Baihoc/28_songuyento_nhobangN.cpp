#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int kiemtrasonguyento(int x)
{
    if(x<=1)
    return 0;
    for(int j=2;j<=sqrt(x);j++)
    {
        if(x%j==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    do
    {
        cout<<"nhap so n = ";
        cin>>n;
    }
    while(n<1);
    for(int i=2;i<=n;i++)
    {
        //int kt = kkiemtrasonguyento(i);
        if(kiemtrasonguyento(i))
        {
            cout<<" "<<i;
        }
    }
}