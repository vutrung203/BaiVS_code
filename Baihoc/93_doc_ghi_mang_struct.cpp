#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
using namespace std;

struct date
{
    int ngay;
    int thang;
    int nam;
};
struct sinhvien
{
    int id;
    char ten[50];
    char gioitinh[10];
    date ngaysinh;
    int tuoi;
    float diemmon1;
    float diemmon2;
    float diemmon3;
    float diemtrungbinh;
    char hocluc[10];
    char malop[30];
};
typedef sinhvien sv;

void nhapsinhvien(sv &sv);
void insinhvien(sv sv);
void tinhtuoi(sv &sv);
void tinhdiemtrungbinh(sv *sv);
void xeploai(sv &sv);
void capnhatsinhvien(sv &sv);
void nhapdssinhvien(sv ds[],int &n);
void xuatdssinhvien(sv ds[],int n);
float timmax_diemtb(sv ds[],int n);
int timmin_tuoi(sv ds[],int n);
void xuatdssinhvienxeploai(sv ds[],int n);
void xuatdssinhvientheolop(sv ds[],int n,char lop[]);
int timsinhvientheoten(sv ds[],int n,char ten[]);
void xoasinhvientheoid(sv ds[],int &n,int id);
void sapxepdssinhvientheodtb(sv ds[],int n);
void sapxepdssinhvientheoten(sv ds[],int n);

void xoaxuongdong(char x[])
{
    // trung \n\0 => trung \0\0
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1]='\0';
    }
}

void nhapsinhvien(sv &sv)
{
    cout<<endl<<"============================"<<endl;
    cout<<endl<<"ID : ";cin>>sv.id;
    cout<<endl<<"Ten : ";fflush(stdin);fgets(sv.ten,sizeof(sv.ten),stdin);xoaxuongdong(sv.ten);
    cout<<endl<<"Gioi Tinh : ";fflush(stdin);fgets(sv.gioitinh,sizeof(sv.gioitinh),stdin);xoaxuongdong(sv.gioitinh);    
    cout<<endl<<"Ngay Sinh : ";cin>>sv.ngaysinh.ngay>>sv.ngaysinh.thang>>sv.ngaysinh.nam;
    cout<<endl<<"diem mon 1 : ";cin>>sv.diemmon1;
    cout<<endl<<"diem mon 2 : ";cin>>sv.diemmon2;
    cout<<endl<<"diem mon 3 : ";cin>>sv.diemmon3;
    cout<<endl<<"Ma Lop : ";fflush(stdin);fgets(sv.malop,sizeof(sv.malop),stdin);xoaxuongdong(sv.malop);
}
void insinhvien(sv sv)
{
    cout<<sv.id<<"\t"<<sv.ten<<"\t  "<<sv.gioitinh<<"\t"<<"\t"<<sv.ngaysinh.ngay<<"/"<<sv.ngaysinh.thang<<"/"<<sv.ngaysinh.nam<<"\t "<<sv.tuoi<<"\t "<<sv.diemmon1<<"\t "<<sv.diemmon2<<"\t "<<sv.diemmon3<<"\t "<<sv.diemtrungbinh<<"\t"<<"\t"<<sv.hocluc<<"\t"<<"\t"<<sv.malop<<endl;
}
void tinhtuoi(sv &sv)
{
    time_t Time = time(0);
    tm* now = localtime(&Time);
    int namhientai = now->tm_year+1900;
    sv.tuoi = namhientai - sv.ngaysinh.nam;
}
void tinhdiemtrungbinh(sv *sv)
{
    sv->diemtrungbinh = (sv->diemmon1 + sv->diemmon2 + sv->diemmon3)/3;
}
void xeploai(sv &sv)
{
    if (sv.diemtrungbinh>9)
    {
        strcpy(sv.hocluc,"Xuat Sac");
    }
    else if (sv.diemtrungbinh>8)
    {
        strcpy(sv.hocluc,"Gioi");
    }
    else if (sv.diemtrungbinh>7)
    {
        strcpy(sv.hocluc,"Kha");
    }
    else if (sv.diemtrungbinh>5)
    {
        strcpy(sv.hocluc,"TB");
    }
    else
    {
        strcpy(sv.hocluc,"Yeu");
    }
}
void capnhatsinhvien(sv &sv)
{
    nhapsinhvien(sv);
    tinhtuoi(sv);
    tinhdiemtrungbinh(&sv);
    xeploai(sv);
}
void nhapdssinhvien(sv ds[],int &n)
{
    do
    {
        cout<<endl<<"nhap vao day : ";
        cin>>n;
    } while (n<=0);
    for (int i = 0; i < n; i++)
    {
        //cout<<"nhap vao sinh vien thu : "<<i<<endl;
        capnhatsinhvien(ds[i]);
    }
}
void xuatdssinhvien(sv ds[],int n)
{
    cout<<endl<<"ID   \t   Ten   \t Gioi Tinh \tNgay Sinh \t Tuoi \tDiem 1 \tDiem 2 \tDiem 3 \tDiem TB \tHoc Luc \tMa Lop"<<endl;
    for (int i = 0; i < n; i++)
    {
        //cout<<"nhap vao sinh vien thu : "<<i;
        insinhvien(ds[i]);
    }
}
float timmax_diemtb(sv ds[],int n)
{
    float max = ds[0].diemtrungbinh;
    for (int i = 0; i < n; i++)
    {
        if (max < ds[i].diemtrungbinh)
        {
            max = ds[i].diemtrungbinh;
        }
    }
    return max;
}
int timmin_tuoi(sv ds[],int n)
{
    int min = ds[0].tuoi;
    for (int i = 0; i < n; i++)
    {
        if (min > ds[i].tuoi)
        {
            min = ds[i].tuoi;
        }
    }
    return min;
}
void xuatdssinhvientheolop(sv ds[],int n,char lop[])
{
    cout<<endl<<"danh sach sinh vien lop : "<<lop<<endl;
    cout<<endl<<"ID   \t   Ten   \t Gioi Tinh \tNgay Sinh \t Tuoi \tDiem 1 \tDiem 2 \tDiem 3 \tDiem TB \tHoc Luc \tMa Lop"<<endl;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(ds[i].malop,lop))
        {
            insinhvien(ds[i]);
        }
    }
}
void xuatdssinhvienxeploai(sv ds[],int n, char xeploai[])
{
    cout<<endl<<"danh sach sinh vien xep loai "<<endl;
    cout<<endl<<"ID   \t   Ten   \t Gioi Tinh \tNgay Sinh \t Tuoi \tDiem 1 \tDiem 2 \tDiem 3 \tDiem TB \tHoc Luc \tMa Lop"<<endl;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(ds[i].hocluc,xeploai)==0)
        {
            insinhvien(ds[i]);   
        }
    }
}
int timsinhvientheoten(sv ds[],int n,char ten[])
{
    for (int i = 0; i < n; i++)
    {
        if (strstr(strupr(ds[i].ten),strupr(ten)))
        {
            return 1;
        }
    }
    return 0;
}
void xoasinhvientheoid(sv ds[],int &n,int id)
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].id==id)
        {
            for (int j = i; j < n; j++)
            {
                ds[j] = ds[j+1];
            }
            n-=1;  
            return;
        }
    }
}
void sapxepdssinhvientheodtb(sv ds[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ds[i].diemtrungbinh<ds[j].diemtrungbinh)
            {
                sv temp;
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}
void sapxepdssinhvientheoten(sv ds[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (strcmp(strupr(ds[i].ten),strupr(ds[j].ten))>0)
            {
                sv temp;
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}
void xuatvaofile(sv ds[], int n)
{
    char tenfile[100];
    cout<<endl<<"nhap vao duong dan ten file : ";
    fflush(stdin);fgets(tenfile,sizeof(tenfile),stdin);xoaxuongdong(tenfile);
    FILE *f;
    f = fopen(tenfile,"wb");
    if (f==NULL)
    {
        cout<<endl<<"loi tao hoac mo file"<<endl;
        return;
    }
    //fprintf(f,"%d",n);
    fwrite(&n, sizeof(n), 1, f);
    for (int i = 0; i < n; i++)
    {
        //fprintf(f,"%d",n);
        fwrite(&ds[i], sizeof(sv), 1, f);
    }
    fclose(f);
}
void nhaptufile(sv ds[], int &n)
{
    char tenfile[100];
    cout<<endl<<"nhap vao duong dan ten file : ";
    fflush(stdin);fgets(tenfile,sizeof(tenfile),stdin);xoaxuongdong(tenfile);
    FILE *f;
    f = fopen(tenfile,"rb");
    if (f==NULL)
    {
        cout<<endl<<"loi mo file"<<endl;
        return;
    }
    //fprintf(f,"%d",n);
    fread(&n, sizeof(n), 1, f);
    for (int i = 0; i < n; i++)
    {
        //fprintf(f,"%d",n);
        fread(&ds[i], sizeof(sv), 1, f);
    }
    fclose(f);
}
int main()
{
   sv ds[100];
   int n;
   int chon;
   do
   {
       cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++"<<endl;
       cout<<"*******************************************************"<<endl;
       cout<<"**  Menu                                             **"<<endl;
       cout<<"**  1 - Nhap danh sach sinh vien :                   **"<<endl;
       cout<<"**  2 - Xuat danh sach sinh vien :                   **"<<endl;
       cout<<"**  3 - Tim Max DTB :                                **"<<endl;
       cout<<"**  4 - Tim min Tuoi :                               **"<<endl;
       cout<<"**  5 - Xuat sinh vien theo lop :                    **"<<endl;
       cout<<"**  6 - xuat sinh vien loai :                        **"<<endl;
       cout<<"**  7 - Sap xep sinh vien theo DTB :                 **"<<endl;
       cout<<"**  8 - Sap xep sinh vien theo Ten :                 **"<<endl;
       cout<<"**  9 - Tim sinh vien theo ten :                     **"<<endl;
       cout<<"**  10 - Xoa sinh vien theo ID :                     **"<<endl;
       cout<<"**  11 - Nhap danh sach tu FILE :                    **"<<endl;
       cout<<"**  12 - xuat danh sach vao FILE :                   **"<<endl;
       cout<<"**  0 - Thoat :                                      **"<<endl;
       cout<<"*******************************************************"<<endl;
       cout<<"======================================================="<<endl;
       cout << "Nhap tuy chon : ";
       cin>>chon;
       cout<<"======================================================="<<endl;
       switch(chon)
       {
           case 1:
           nhapdssinhvien(ds,n);break;
           case 2:
           xuatdssinhvien(ds,n);break;
           case 3:
           cout<<endl<<"MAX DTB = "<<timmax_diemtb(ds,n)<<endl;break;
           case 4:
           cout<<endl<<"MIN Tuoi : "<<timmin_tuoi(ds,n)<<endl;break;
           case 5:
           char lop[20];
           cout<<endl<<"nhap ma lop : ";fflush(stdin);fgets(lop,sizeof(lop),stdin);xoaxuongdong(lop);
           xuatdssinhvientheolop(ds,n,lop);
           break;
           case 6:
           char xeploai[20];
           cout<<endl<<"nhap xep loai : ";fflush(stdin);fgets(xeploai,sizeof(xeploai),stdin);xoaxuongdong(xeploai);
           xuatdssinhvienxeploai(ds,n,xeploai);
           break;
           case 7:
           sapxepdssinhvientheodtb(ds,n);
           cout<<endl<<"DS sau khi sap xep theo DTB : "<<endl;
           xuatdssinhvien(ds,n);
           break;
           case 8:
           sapxepdssinhvientheoten(ds,n);
           cout<<endl<<"DS sau khi sap xep theo Ten : "<<endl;
           xuatdssinhvien(ds,n);
           break;
           case 9:
           char tensv[20];
           cout<<endl<<"ten sinh vien can tim : ";fflush(stdin);fgets(tensv,sizeof(tensv),stdin);xoaxuongdong(tensv);
           cout<<endl<<"ket qua tim Sinh Vien : "<<timsinhvientheoten(ds,n,tensv);
           break;
           case 10:
           int id;
           cout<<endl<<"nhap ID can xoa : ";cin>>id;
           cout<<endl<<"danh sach sinh vien sau kh xoa : "<<endl;
           xoasinhvientheoid(ds,n,id);
           xuatdssinhvien(ds,n);
           break;
           case 11:
           nhaptufile(ds,n);
           break;
           case 12:
           xuatvaofile(ds,n);
           break;
       }
   } while (chon!=0);
}