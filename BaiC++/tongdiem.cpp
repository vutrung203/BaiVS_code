#include <iostream>
#include <string.h>

using namespace std;

class NGUOI {
protected:
    char Hoten[50];
    char Ngaysinh[12];
    char Quequan[100];
public:
    NGUOI() {
        strcpy(Hoten, "");
        strcpy(Ngaysinh, "");
        strcpy(Quequan, "");
    }
    NGUOI(char hoten[], char ngaysinh[], char quequan[]) {
        strcpy(Hoten, hoten);
        strcpy(Ngaysinh, ngaysinh);
        strcpy(Quequan, quequan);
    }
    void nhap() {
        cout << "Nhap ho ten: ";
        cin.ignore();
        cin.getline(Hoten, 50);
        cout << "Nhap ngay sinh: ";
        cin.getline(Ngaysinh, 12);
        cout << "Nhap que quan: ";
        cin.getline(Quequan, 100);
    }
    void xuat() {
        cout << "Ho ten: " << Hoten << endl;
        cout << "Ngay sinh: " << Ngaysinh << endl;
        cout << "Que quan: " << Quequan << endl;
    }
};

class DIEM {
protected:
    int Diemtoan;
    int Diemly;
    int Diemhoa;
public:
    DIEM() {
        Diemtoan = 0;
        Diemly = 0;
        Diemhoa = 0;
    }
    DIEM(int diemtoan, int diemly, int diemhoa) {
        Diemtoan = diemtoan;
        Diemly = diemly;
        Diemhoa = diemhoa;
    }
    void nhap() {
        cout << "Nhap diem toan: ";
        cin >> Diemtoan;
        cout << "Nhap diem ly: ";
        cin >> Diemly;
        cout << "Nhap diem hoa: ";
        cin >> Diemhoa;
    }
    void xuat() {
        cout << "Diem toan: " << Diemtoan << endl;
        cout << "Diem ly: " << Diemly << endl;
        cout << "Diem hoa: " << Diemhoa << endl;
    }
};

class THISINH : public NGUOI, public DIEM {
private:
    char SBD[30];
    int Tongdiem;
public:
    THISINH() {
        strcpy(SBD, "");
        Tongdiem = 0;
    }
    THISINH(char hoten[], char ngaysinh[], char quequan[], int diemtoan, int diemly, int diemhoa, char sbd[], int tongdiem)
        : NGUOI(hoten, ngaysinh, quequan), DIEM(diemtoan, diemly, diemhoa) {
        strcpy(SBD, sbd);
        Tongdiem = tongdiem;
    }
    void nhap() {
        NGUOI::nhap();
        DIEM::nhap();
        cout << "Nhap SBD: ";
        cin >> SBD;
        Tongdiem = Diemtoan + Diemly + Diemhoa;
    }
    void xuat() {
        NGUOI::xuat();
        DIEM::xuat();
        cout << "SBD: " << SBD << endl;
        cout << "Tong diem: " << Tongdiem << endl;
    }
    int getTongdiem() {
        return Tongdiem;
    }
};

void sapXep(THISINH a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i].getTongdiem() < a[j].getTongdiem()) {
                THISINH temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    THISINH a[100];
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin thi sinh thu " << i+1 << endl;
        a[i].nhap();
    }
    sapXep(a, n);
    cout << "Danh sach thi sinh sau khi sap xep:" << endl;
    for (int i = 0; i < n; i++) {
        a[i].xuat();
        cout << "----------------------\n";
    }
    return 0;
}