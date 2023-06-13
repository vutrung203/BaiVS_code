#include <bits/stdc++.h>

using namespace std;

class Sinhvien
{
    private: 
    char msv[10], ho_ten[10], lop[10];
    float diem_hk;
    public:
    void nhap();
    void xuat();
};

void Sinhvien::nhap()
{
    cout << "Nhap ma sinh vien" << endl; cin.getline(msv,10);
    cout << "Nhap ho va ten sinh vien" << endl; cin.getline(ho_ten,10);
    cout << "Nhap Lop sinh vien" << endl; cin.getline(lop,10);
    cout << "Nhap diem hoc ky sinh vien" << endl; cin >> diem_hk;
}

void Sinhvien::xuat()
{
    cout << "danh sach sinh vien" << endl;
    cout << "Ma sinh vien" << "Ho va ten sinh vien" << "Lop sinh vien" << "Diem hoc ky sinh vien" << endl;
    cout << this->msv << "\t" << this->ho_ten <<"\t"<< this->lop<< "\t" << this->diem_hk;
}

int main(int argc, char const *argv[])
{
    Sinhvien sv;
    sv.nhap();
    sv.xuat();
    return 0;
}
