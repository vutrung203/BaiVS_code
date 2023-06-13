#include <iostream>
#include <string>
using namespace std;
class VeKhachHang {
private:
    string tenKhachHang;
    int soLuongVe;
public:
    VeKhachHang() {
        tenKhachHang = "";
        soLuongVe = 0;
    }
    VeKhachHang(string tenKhach, int soVe) {
        tenKhachHang = tenKhach;
        soLuongVe = soVe;
    }
    void nhap() {
        cout << "Nhap ten khach hang: ";
        getline(cin, tenKhachHang);
        cout << "Nhap so luong ve: ";
        cin >> soLuongVe;
        cin.ignore();
    }
    void xuat() {
        cout << "   + Khach hang: " << tenKhachHang << endl;
        cout << "   + So luong ve: " << soLuongVe << endl;
    }
    friend class PhieuDatTour;
};

class Tour {
private:
    string maTour;
    string tenTour;
    int giaTour;
public:
    Tour() {
        maTour = "";
        tenTour = "";
        giaTour = 0;
    }
    Tour(string ma, string ten, int gia) {
        maTour = ma;
        tenTour = ten;
        giaTour = gia;
    }
    void nhap() {
        cout << "Nhap ma tour: ";
        getline(cin, maTour);
        cout << "Nhap ten tour: ";
        getline(cin, tenTour);
        cout << "Nhap gia tour: ";
        cin >> giaTour;
        cin.ignore();
    }
    void xuat() {
        cout << "+ Tour: " << tenTour << endl;
        cout << "   + Ma tour: " << maTour << endl;
        cout << "   + Gia tour: " << giaTour << endl;
    }
    int getGiaTour() {
        return giaTour;
    }
};

class PhieuDatTour {
private:
    string maPhieu;
    string ngayDat;
    string ngayKhoiHanh;
    VeKhachHang veKH;
    Tour tour;
    int tienDatTruoc;
public:
    PhieuDatTour() {
        maPhieu = "";
        ngayDat = "";
        ngayKhoiHanh = "";
        tienDatTruoc = 0;
    }
    void nhap() {
        cout << "Nhap ma phieu: ";
        getline(cin, maPhieu);
        cout << "Nhap ngay dat (dd/mm/yyyy): ";
        getline(cin, ngayDat);
        cout << "Nhap ngay khoi hanh (dd/mm/yyyy): ";
        getline(cin, ngayKhoiHanh);
        veKH.nhap();
        tour.nhap();
        cout << "Nhap tien dat truoc: ";
        cin >> tienDatTruoc;
        cin.ignore();
    }
    void xuat() {
        cout << "===============================================" << endl;
        cout << "Ma phieu: " << maPhieu << endl;
        cout << "Ngay dat: " << ngayDat << endl;
        cout << "Ngay khoi hanh: " << ngayKhoiHanh << endl;
        veKH.xuat();
        tour.xuat();
        cout << "Tien dat truoc: " << tienDatTruoc << endl;
        int thanhTien = tour.getGiaTour() * veKH.soLuongVe;
        cout << "Thanh tien: " << thanhTien << endl;
        cout << "Tien con lai sau khi thanh toan: " << thanhTien - tienDatTruoc << endl;
        cout << "===============================================" << endl;
    }
};

int main() {
    PhieuDatTour phieu;
    cout << "Nhap thong tin phieu dat tour:" << endl;
    phieu.nhap();
    phieu.xuat();
    return 0;
}
