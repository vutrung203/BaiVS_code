#include <iostream>
using namespace std;
class Phanso
{
private:
    double a;
    double b;
public:

    void nhapsl()
    {
        cout<<"\n nhap tu so : "; cin>>a;
        cout<<"\n nhap mau so: ";cin>>b;
    }
    void insl()
    {
        cout<<" "<<a<<"/"<<b;
    }

    bool operator < (Phanso &);
    bool operator > (Phanso &);
};
bool Phanso::operator>(Phanso&r)
{
    int ts1,ms1;
    ts1=a*r.b - b*r.a;
    ms1=b * r.b;
    return (ts1*ms1>0);
}
bool Phanso::operator<(Phanso&r)
{
    if(r>*this)
        return true;
    return false;
}
void sapxep(Phanso a[],int n)
{
    Phanso temp;
    int i,j;
    for(i=0;i<n;++i)
        for(j=i+1;j<n;++j)
        if(a[j]<a[i])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
int main()
{
    Phanso*a;
    int n,i;
    cout << "nhap so luong phan so: ";
    cin >> n;
    a=new Phanso[n];

    for ( i = 0; i < n; i++)
    {
        cout << "\nNhap vao so thu " << i+1 << ": "; a[i].nhapsl();
    }
        cout<<"\nMang cac phan so vua nhap vao: ";
    for(i=0;i<n;++i)
    {
        cout<<"\n";
        a[i].insl();
    }
    sapxep(a, n);
    cout << "\nMang sau khi sap xep:  ";

    for (int i = 0; i < n; i++)
    {
        a[i].insl();
    }

}
