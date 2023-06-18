#include"iostream"
#include"stdio.h"
#include"stdlib.h"
using namespace std;

struct ngaysinh
{
    int ngay;
    int thang;
    int nam;
};
int main()
{
    FILE *f;
    //tao , mo file
    f = fopen("90_ghi_file_nhiphan.bin","rb");
    if (f==NULL)
    {
        cout<<endl<<"loi tao hoac mo file";
        exit(1);
    }
    //ghi du lieu
    ngaysinh n1;

    fwrite(&n1, sizeof (struct ngaysinh), 1, f);
    cout<<endl<<"ngay sinh : "<<n1.ngay<<"/"<<n1.thang<<"/"<<n1.nam;

    // dong FILE
    fclose(f);
    return 0;
}
