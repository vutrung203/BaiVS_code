#include"iostream"
#include"stdio.h"
#include"stdlib.h"
using namespace std;

void nhapmang(int x[],int &n)
{
    do
    {
        cout<<"nhap vao n : ";
        cin>>n;
    } while (n<=0);
    for (int i = 0; i < n; i++)
    {
        cout<<endl<<"x ["<<i<<"] = ";
        cin>>x[i];
    }
}
void xuatmang(int x[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"x ["<<i<<"] = "<<x[i]<<endl;
    }
}
void xuatfilex(int x[],int n, char tenfile[50])
{
    FILE *f;
    f = fopen(tenfile,"w");
    if (f==NULL)
    {
        cout<<endl<<"loi tao hoac mo file";
        return;
    }
    fprintf(f,"%d\n",n);
    for (int i = 0; i < n; i++)
    {
        fprintf(f,"%d\n",x[i]);
    }
    fclose(f);
}
void xuatfilex2(int x[],int n, char tenfile[50])
{
    FILE *f;
    f = fopen(tenfile,"w");
    if (f==NULL)
    {
        cout<<endl<<"loi tao hoac mo file";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(f,"%d\n",x[i]);
    }
    fclose(f);
}
void nhapfilex(int x[],int &n, char tenfile[50])
{
    // biet so luong phan tu
    FILE *f;
    f = fopen(tenfile,"r");
    if (f==NULL)
    {
        cout<<endl<<"loi tao hoac mo file";
        return;
    }
    fscanf(f,"%d",&n);
    cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        fscanf(f,"%d",&x[i]);
        //cout<<x[i];
    }
    fclose(f);
}
void nhapfilex2(int x[],int &n, char tenfile[50])
{
    //chua biet so luong
    //chua ket thuc File van doc
    FILE *f;
    f = fopen(tenfile,"r");
    if (f==NULL)
    {
        cout<<endl<<"loi tao hoac mo file";
        return;
    }
    int i = 0;
    while(!feof(f))
    {
        fscanf(f,"%d",&x[i]);
        i++;
    }
    n = i;
    fclose(f);
}
int main()
{
    int a[100];
    int n;
    //nhapmang(a,n);
    //xuatmang(a,n);
    //xuatfilex(a,n,"92_nhap_xuat_mang_file.out");
    //xuatfilex2(a,n,"92_2_nhap_xuat_mang_file.out");
    nhapfilex2(a,n,"92_nhap_xuat_mang_file.out");
    xuatmang(a,n);

}