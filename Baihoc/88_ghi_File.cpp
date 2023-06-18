#include"iostream"
#include"stdio.h"
#include"stdlib.h"
using namespace std;

int main()
{
    FILE *f;
    // 1 - tao FILE
    // 2 - mo FILE

    f = fopen("88_ghi_file.txt","w");
    if (f==NULL)
    {
        cout<<endl<<"loi tao hoac mo file";
        exit(1);
    }
    // 3 - doc FILE
    int n;
    cout<<endl<<"nhap vao so n : ";
    cin>>n;
    fprintf(f,"%d",n);
    // 4 - dong FILE
    fclose(f);
    return 0;

}