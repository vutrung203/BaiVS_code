#include <iostream>
using namespace std;

class Cay {
protected:
    int chieuCao;
    int doTuoi;
    int chuViTan;
public:
    void nhap() {
        cout << "Nhap chieu cao: ";
        cin >> chieuCao;
        cout << "Nhap do tuoi: ";
        cin >> doTuoi;
        cout << "Nhap chu vi tan: ";
        cin >> chuViTan;
    }
    void xuat() {
        cout << "Chieu cao: " << chieuCao << endl;
        cout << "Do tuoi: " << doTuoi << endl;
        cout << "Chu vi tan: " << chuViTan << endl;
    }
};

class CayCanh : public Cay {
private:
    float giaThanh;
    string chungLoai;
public:
    void nhap() {
        Cay::nhap();
        cout << "Nhap gia thanh: ";
        cin >> giaThanh;
        cout << "Nhap chung loai: ";
        cin >> chungLoai;
    }
    void xuat() {
        Cay::xuat();
        cout << "Gia thanh: " << giaThanh << endl;
        cout << "Chung loai: " << chungLoai << endl;
    }
};

int main() {
    Cay cay;
    CayCanh cayCanh;

    Cay* ptr = &cay;
    cout << "Nhap thong tin cay" << endl;
    ptr->nhap();
    cout << "Thong tin cay" << endl;
    ptr->xuat();

    ptr = &cayCanh;
    cout << "Nhap thong tin cay canh" << endl;
    ptr->nhap();
    cout << "Thong tin cay canh" << endl;
    ptr->xuat();

    return 0;
}