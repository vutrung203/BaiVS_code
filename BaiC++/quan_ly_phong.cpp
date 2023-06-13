#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Phong 
{
	string maPhong;
    string tenPhong;
    float dienTich;
    float donGia;
};

void nhapPhong(Phong& phong) 
{
	cout << "Nhap ma phong: ";
    cin >> phong.maPhong;
    cout << "Nhap ten phong: ";
    cin.ignore();
    getline(cin, phong.tenPhong);
    cout << "Nhap dien tich: ";
    cin >> phong.dienTich;
    cout << "Nhap don gia: ";
    cin >> phong.donGia;
}
void xuatPhong(const Phong& phong) 
{
	cout << "Ma phong: " << phong.maPhong << endl;
    cout << "Ten phong: " << phong.tenPhong << endl;
    cout << "Dien tich: " << phong.dienTich << endl;
    cout << "Don gia: " << phong.donGia << endl;
}
void nhapDanhSachPhong(Phong danhSachPhong[], int soPhong) 
{
	for (int i = 0; i < soPhong; i++) 
	{
		cout << "Nhap thong tin phong thu " << i + 1 << ":" << endl;
        nhapPhong(danhSachPhong[i]);
    }
}
void xuatDanhSachPhong(const Phong danhSachPhong[], int soPhong) 
{
	for (int i = 0; i < soPhong; i++) 
	{
		cout << "Thong tin phong thu " << i + 1 << ":" << endl;
        xuatPhong(danhSachPhong[i]);
        cout << endl;
	}
}
void timPhongTheoMa(const Phong danhSachPhong[], int soPhong, string maPhong) 
{
	for (int i = 0; i < soPhong; i++) 
	{
		if (danhSachPhong[i].maPhong == maPhong) 
		{
			cout << "Thong tin phong can tim:" << endl;
            xuatPhong(danhSachPhong[i]);
            return;
		}
    }
    {
    	cout << "Khong tim thay phong co ma " << maPhong << endl;
	}
}
void capNhatDienTichPhong(Phong danhSachPhong[], int soPhong, string maPhong, float dienTichMoi) 
{
	for (int i = 0; i < soPhong; i++) 
	{
		if (danhSachPhong[i].maPhong == maPhong) 
		{
			danhSachPhong[i].dienTich = dienTichMoi;
            cout << "Cap nhat dien tich phong thanh cong." << endl;
            return;
		}
    }    
	cout << "Khong tim thay phong co ma " << maPhong << endl;
}
bool compareDonGia(const Phong& phong1, const Phong& phong2) 
{
	return phong1.donGia < phong2.donGia;
}
void sapXepTheoDonGia(Phong danhSachPhong[], int soPhong) 
{
	sort(danhSachPhong, danhSachPhong + soPhong, compareDonGia);
    cout << "Danh sach phong sau khi sap xep theo don gia:" << endl;
    xuatDanhSachPhong(danhSachPhong, soPhong);
}
void timPhongCoDienTichLonNhat(const Phong danhSachPhong[], int soPhong) 
{
	float maxDienTich = 0;
    int index = -1;
    for (int i = 0; i < soPhong; i++) 
    {
    	if (danhSachPhong[i].dienTich > maxDienTich) 
    	{
    		maxDienTich = danhSachPhong[i].dienTich;
            index = i;
		}
    }
    if (index != -1) 
    {
    	cout << "Phong co dien tich lon nhat:" << endl;
        xuatPhong(danhSachPhong[index]);
	}
}

int main() 
{
	const int MAX_PHONG = 100;
    Phong danhSachPhong[MAX_PHONG];
    int soPhong;
    cout << "Nhap so luong phong: ";
    cin >> soPhong;
    nhapDanhSachPhong(danhSachPhong, soPhong);
    cout << "\nDanh sach phong:" << endl;
    xuatDanhSachPhong(danhSachPhong, soPhong);
    string maPhongTim;
    cout << "\nNhap ma phong can tim: ";
    cin >> maPhongTim;
    timPhongTheoMa(danhSachPhong, soPhong, maPhongTim);
    string maPhongCapNhat;
    float dienTichMoi;
    cout << "\nNhap ma phong can cap nhat dien tich: ";
    cin >> maPhongCapNhat;
    cout << "Nhap dien tich moi: ";
    cin >> dienTichMoi;
    capNhatDienTichPhong(danhSachPhong, soPhong, maPhongCapNhat, dienTichMoi);
    sapXepTheoDonGia(danhSachPhong, soPhong);
    cout << "\nPhong co dien tich lon nhat:" << endl;
    timPhongCoDienTichLonNhat(danhSachPhong, soPhong);
    return 0;
}