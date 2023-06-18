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
    f = fopen("90_ghi_file_nhiphan.bin","wb");
    if (f==NULL)
    {
        cout<<endl<<"loi tao hoac mo file";
        exit(1);
    }
    //ghi du lieu
    ngaysinh n1;
	n1.ngay = 1;
	n1.thang = 12;
	n1.nam = 2025;
	
	fwrite(&n1, sizeof (struct ngaysinh), 1, f);
	
    // dong FILE
    fclose(f);
    return 0;
}
