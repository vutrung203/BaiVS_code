#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;

class SV
{
	char MaSV[10],TenSV[100];
public:
	void nhap();
	void xuat();

};

class Lop
{
	char TenLop[30];
	int Khoa;
public:
	void nhap();
	void xuat();

};

class MonHoc
{
	char TenMH[30];
	int SoTinChi;
	int Diem;
public:
	void nhap();
	void xuat();
	friend class Phieu;
};
class Phieu
{
	SV a;
	Lop b;
	int n;
	MonHoc c[100];
public:
	void nhap();
	void xuat();
};

void SV::nhap()
{
	cin.ignore();
	cout<<"Ma sinh vien: ";
	gets(MaSV);
	fflush(stdin);
	cout<<"Ten sinh vien: ";
	gets(TenSV);
	fflush(stdin);
}

void SV::xuat()
{
	cout<<"Ma sinh vien: "<<MaSV;
	cout<<"\tTen sinh vien: "<<TenSV<<endl;
}

void Lop::nhap()
{

	cout<<"Nhap lop hoc : ";
	gets(TenLop);
	fflush(stdin);
	cout<<"Nhap Khoa hoc: ";
	cin>>Khoa;
}
void Lop::xuat()
{
	cout<<"Lop hoc : "<<TenLop;
	cout<<"\tKhoa hoc: "<<Khoa<<endl;

}

void MonHoc::nhap()
{
	cin.ignore();
	cout<<"Nhap ten mon hoc: ";
	gets(TenMH);
	fflush(stdin);
	cout<<"Nhap so tin chi: ";
	cin>>SoTinChi;
	cout<<"Nhap diem : ";
	cin>>Diem;
}

void MonHoc::xuat()
{
	cout<<setw(5)<<TenMH<<setw(15)<<SoTinChi<<setw(15)<<Diem<<endl;
}

void Phieu::nhap()
{
	cout<<"--------------------------------------------"<<endl;
	a.nhap();
	b.nhap();
	cout<<"Nhap so mon hoc:" ;
	cin>>n;
	for(int i=0;i<n;i++)
		c[i].nhap();
}

void Phieu::xuat()
{
	cout<<"----------------------------------------------"<<endl;
	cout<<"	         PHIEU BAO DIEM      	\n";
	a.xuat();

	b.xuat();
	cout<<"Bang diem:\n";
	cout<<"----------------------------------------------"<<endl;
	cout<<"Ten mon hoc\tSo tin chi"<<setw(12)<<"Diem\n";
	for(int i=0;i<n;i++)
	{
		cout<<"----------------------------------------------"<<endl;
		c[i].xuat();
	}

	cout<<"----------------------------------------------"<<endl;
	float D=0,TongST=0,DTB=0;
	for(int i=0;i<n;i++)
	{
		D=D+c[i].SoTinChi*c[i].Diem;
		TongST=TongST+c[i].SoTinChi;
	}

	DTB=D/TongST;
	cout<<"\tDiem trung binh: "<<DTB<<endl<<endl<<endl;
}

int main()
{
	int n;
	Phieu x[100];
	cout<<"Nhap so luong phieu = ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap sinh vien thu:"<<i+1<<endl;
		x[i].nhap();

	}

	for(int i=0;i<n;i++)
		x[i].xuat();


	_getch();
	return 0;
}
