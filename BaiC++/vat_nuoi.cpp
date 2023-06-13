#include <iostream>
using namespace std;

class ConVat {
public:
    enum Loai { CHO, MEOT, RONG };
    ConVat() : loai(RONG) {}
    void setLoai(Loai loai_moi) { loai = loai_moi; }
    Loai getLoai() const { return loai; }
private:
    Loai loai;
};

class O {
public:
    O() : con_vat() {}
    void setConVat(ConVat::Loai loai_moi) { con_vat.setLoai(loai_moi); }
    bool coConVat() const { return con_vat.getLoai() != ConVat::RONG; }
    ConVat::Loai getLoaiConVat() const { return con_vat.getLoai(); }
    void xoaConVat() { con_vat.setLoai(ConVat::RONG); }
private:
    ConVat con_vat;
};

int main() {
    O o[20];
    int so_con_vat = 0;

    while(true) {
        int hanh_dong;
        cout << "Nhap hanh dong (1: nhap con vat moi, 2: ban con vat, 3: thong ke): ";
        cin >> hanh_dong;

        if(hanh_dong == 1) {
            if(so_con_vat == 20) {
                cout << "Khong du cho trong de them con vat." << endl;
            }
            else {
                int loai;
                cout << "Nhap loai con vat (1: cho, 2: meo): ";
                cin >> loai;
                o[so_con_vat].setConVat((loai == 1) ? ConVat::CHO : ConVat::MEOT);
                so_con_vat++;
            }
        }
        else if(hanh_dong == 2) {
            int loai;
            cout << "Nhap loai con vat can ban (1: cho, 2: meo): ";
            cin >> loai;

            bool da_tim_thay = false;

            for(int i = 0; i < 20; i++) {
                if(o[i].coConVat() && o[i].getLoaiConVat() == ((loai == 1) ? ConVat::CHO : ConVat::MEOT)) {
                    da_tim_thay = true;
                    o[i].xoaConVat();
                    cout << "Ban duoc con vat." << endl;
                    break;
                }
            }

            if(!da_tim_thay) {
                cout << "Khong tim thay con vat can ban." << endl;
            }
        }
        else if(hanh_dong == 3) {
            int so_cho = 0;
            int so_meo = 0;
            for(int i = 0; i < 20; i++) {
                if(o[i].coConVat()) {
                    if(o[i].getLoaiConVat() == ConVat::CHO) {
                        so_cho++;
                    }
                    else {
                        so_meo++;
                    }
                }
            }
            cout << "So con cho con lai: " << so_cho << endl;
            cout << "So con meo con lai: " << so_meo << endl;
        }
        else {
            cout << "Hanh dong khong hop le." << endl;
        }
    }

    return 0;
}