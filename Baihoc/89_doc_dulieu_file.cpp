#include"iostream"
#include"stdio.h"
#include"stdlib.h"
using namespace std;

int main()
{
    FILE *f;
    // 1 - tao FILE
    // 2 - mo FILE

    f = fopen("88_ghi_file.txt","r");
    if (f==NULL)
    {
        cout<<endl<<"loi tao hoac mo file";
        exit(1);
    }
    // 3 - doc du lieu
    int n;
    fscanf(f,"%d",&n);
    cout<<endl<<"gia tri cua n : "<<n;
    // 4 - dong FILE
    fclose(f);
}