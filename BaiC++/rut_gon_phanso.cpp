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
    int ucln(int a, int b)
    {
        a = abs(a); b = abs(b);
        if (a*b == 0) return 1;
        while (a != b)
        if (a>b) a -= b;
        else b -= a;
        return a;
    }
    // rut gon ps
    void rutgon()
    {
        int u;
        u = ucln(a, b);
        a = a / u;
        b = b / u;
    }
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

    cout << "\nDay phan so sau khi rut gon la: ";
    for (int i = 0; i < n; i++)
    {
        a[i].rutgon();
    }
    for (int i = 0; i < n; i++)
    {
        a[i].insl();
    }

}
