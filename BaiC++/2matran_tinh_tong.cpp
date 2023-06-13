#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class Matran
{
private:
    int n,m;
    int A[100][100];
public:
    Matran(){};
        Matran(int n, int m, int A[][100]){
            this->n = n;
            this->m = m;
            for(int i = 0;i<n;i++){
                for(int j = 0; j<m; j++){
                    this->A[i][j] = A[i][j];
                }
            }
        }
    void xuat();
    void Nhap();
    int ktra(Matran &a);
    friend Matran operator +(Matran a,Matran b);
};

void Matran::Nhap()
{
    cout<<"Nhap n (So hang): "; cin>>n;
            cout<<"Nhap m (So cot): "; cin>>m;
            cout<<"\nNhap ma tran\n";
            for(int i = 0;i<n;i++){
                for(int j = 0; j<m; j++){
                    cout<<"A["<<i<<"]["<<j<<"] = ";
                    cin>>this->A[i][j];
                }
            }
}
void Matran::xuat()
{
    for(int i = 0;i<n;i++){
                for(int j = 0; j<m; j++){
                    cout<<this->A[i][j]<<"  ";
                }
                cout<<"\n";
            }
}
int Matran::ktra(Matran &a)
{
    if((n==a.n)&&(m==a.m))
        return 1;
    return 0;
}
Matran operator +(Matran a,Matran b)
{
    int i,j;
    Matran c=a;
    for(i=0;i<a.n;i++)
        for(j=0;j<a.m;j++)
        c.A[i][j]=a.A[i][j]+b.A[i][j];
        return c;
}

int main()
{
    Matran a;
    Matran b;
    cout<<"\n\n--------------NHAP MA TRAN A-----------\n";
    a.Nhap();
    cout<<"\n\n--------------NHAP MA TRAN B-----------\n";
    b.Nhap();

    cout<<"\n\n--------------XUAT MA TRAN A-----------\n";
    a.xuat();
    cout<<"\n--------------XUAT MA TRAN B-----------\n";
    b.xuat();

    cout<<"\n\n--------------CONG 2 MA TRAN-----------\n";
    Matran tong;
    if(a.ktra(b) ==  1){
        tong = (a+b);
        tong.xuat();
    }else{
        cout<<"\n=>Khong the cong 2 ma tran khong cung kich thuoc";
    }
    _getch();
}
