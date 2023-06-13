#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;

int main()
{
    /*
    int x[]={1,2,3,4,5};
    cout<<"mang x : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl<<"dia chi cua x la : "<<&x;
    cout<<endl<<"dia chi cua x[0] la : "<<&x[0];
    */
   int x[10];
   int n=10;
   cout<<"nhap vao cac gia tri cua mang : ";
   for (int i = 0; i < n; i++)
   {
        cout<<"a ["<<i<<"] = ";
        cin>>x[i];
        //cin>>x+i;
   }
   
   
   cout<<"gia tri cua mang la : ";
   for (int i = 0; i < n; i++)
   {
        //cout<<x[i]<<" ";
        cout<<*(x+i)<<" ";
   }
}
