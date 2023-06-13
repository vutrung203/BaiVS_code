#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
using namespace std;

int main ()
{
    int n;
    cout<<"nhap so luong phan tu : ";
    cin>>n;

    int *ptr = (int*)calloc(n,sizeof(int));
    //int *ptr = (int*)malloc(n*sizeof(int));
    if (ptr==NULL)
    {
        cout<<endl<<"Error : kh cap phat dc vung nho";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"a ["<<i<<"] = ";
        cin>>*ptr;
        //scanf("%d",ptr+i);
    }
    // xuat mang
    for (int i = 0; i < n; i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    int x;
    cout<<endl<<"kinh co mang can thay doi la : "<<endl;
    cin>>x;
    realloc(ptr,x);

    // xuat mang
    for (int i = 0; i < x; i++)
    {
        cout<<*(ptr+i)<<" ";
    }

    free(ptr);
}
