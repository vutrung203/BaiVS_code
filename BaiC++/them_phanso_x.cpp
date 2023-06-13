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
    bool operator == (Phanso &);
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
bool Phanso::operator == (Phanso & r)
{
    if (!(*this>r) && !(r>*this))
        return true;
    return false;
}

int main()
{
    Phanso*a ,x;
    int n,i;
    bool tx=false;
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
    cout<<"\nNhap phan so X: ";
    x.nhapsl();
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            tx = true;
            cout << "\nPhan so vua nhap co trong day phan so. ";
            break;
        }
    }
    if (tx == false) cout << "Phan so vua nhap khong co trong day";
    cout<<"\n";

}
