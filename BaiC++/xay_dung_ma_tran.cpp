#include<iostream>
using namespace std;
int n;
class matran
{
public:
    int mt[100][100];
    void nhap()
    {
        cout<<"nhap so dong,cot:";
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"mt["<<i<<"]["<<j<<"]:";
                cin>>mt[i][j];
            }
        }
    }
    void xuat()
    {
       for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mt[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};
matran operator -(matran a,matran b)
{
        matran c;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                c.mt[i][j]+=a.mt[i][j]-b.mt[i][j];
            }
        }
        return c;
}
int main()
{
    matran a,b,c;
    cout<<"nhap phan tu ma tran a:\n";
    a.nhap();
    cout<<"nhap phan tu ma tran b:\n";
    b.nhap();
    cout<<"phan tu ma tran a:\n";
    a.xuat();
    cout<<"phan tu ma tran b:\n";
    b.xuat();
    cout<<"phan tu ma tran b:\n";
    cout<<"hieu 2 ma tran a va b:\n";
    c=a-b;
    c.xuat();
    return 0;
}