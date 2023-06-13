#include<conio.h>
#include<stdio.h>
#include<string.h>
struct SINHVIEN
{
    char hoten[30];
    int namsinh;
    char gioitinh;
    float dtb;
};

struct SINHVIEN person;
void ghi_ds()
{
    printf ("DOC DU LIEU VAO BAN PHIM VA GHI VAO FILE\n");
    printf ("----------------------------------------\n");
    FILE *f;
    f=fopen ("Danh_sach_SV.bin","ab");
    if (f==NULL)
    {
        printf ("loi mo file: Danh_sach_SV.bin");
        //exit(1);
    }
    int n;
    printf ("So luong sinh vien: "); scanf ("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf ("So TT: %d\n",i+1);
        fflush(stdin);
        printf("Ho va ten: ");gets (person.hoten);
        printf ("Nam sinh: ");scanf ("%d",&person.namsinh);
        printf("Gioi tinh (0-nam, 1-nu):"); scanf ("%d",&person.gioitinh);
        printf ("------------------------------------------\n");
        fwrite(&person,sizeof(person),1,f);
    }
    fclose(f);
    printf ("Da ghi xong!");
}
void doc_ds()
{
    printf ("BANG DANH SACH SINH VIEN\n");
    printf ("--------------------------\n");
    FILE *f;
    f=fopen ("Danh_sach_SV.bin","rb");
    if(f==NULL)
    {
        printf ("loi mo file: Danh_sach_SV.bin");
       // exit(0);
    }
    int n=0;
    printf ("----------------------------------------------------------------------------\n");
    printf ("| STT |        Ho va ten       |  Nam sinh  | Gioi tinh |  Diem trung binh  |\n");
    printf ("----------------------------------------------------------------------------\n");
    while (fread(&person, sizeof(person),1,f)!=0)
    {
        printf ("| %4d",n+1);//in stt
        printf ("| %-23s",person.hoten);
        printf ("|     %4d   ",person.namsinh);
        if(person.gioitinh==0)
            printf ("|    Nam    ");
        else
            printf ("|    Nu     ");
        printf ("|        %4.2f       |\n",person.dtb);
        n++;
    }
    printf ("-----------------------------------------------------------------------------\n");
    fclose(f);
}
void tim_sv()
{
    printf ("TIM KIEM SINH VIEN\n");
    printf ("--------------------------\n");
    FILE *f;
    f=fopen("Danh_sach_SV.bin","rb");
    if(f==NULL)
    {
        printf ("loi mo file: Danh_sach_SV.bin");
        //exit(1);
    }
    fflush(stdin);
    char s[30],hoten[30];
    printf ("Tim ai: "); gets (s);
    int n=0;
    while (fread(&person,sizeof(person),1,f)!=0)
    {
        strcpy(hoten,person.hoten);
        strcpy(hoten,strlwr(hoten));
        strcpy(s,strlwr(s));
        if (strstr(hoten,s)!=NULL)
        {
            printf ("%s, %4d,",person.hoten, person.namsinh);
            if (person.gioitinh==0)
                printf (" Nam ");
            else
                printf (" Nu ");
            printf (", %4.2f\n",person.dtb);
            n++;
        }
    }
    fclose (f);
    if(n==0)
        printf ("Khong tim thay!");
}

int main()
    {
        printf ("   CHUONG TRINH QUAN LI SINH VIEN    \n");
        printf ("      -------------------------       \n");
        int chon=0;
        while (chon!=4)
        {
            printf ("\n Menu \n");
            printf ("----------------------------------\n");
            printf ("1. Doc du lieu tu ban phim va ghi vao file \n");
            printf ("2. In du lieu ra man hinh\n");
            printf ("3. Tim  kiem sinh vien \n");
            printf ("4 luu file truong trinh \n");
            printf ("5. exit\n");
            printf ("----------------------------------\n");
            printf ("chon: "); scanf ("%d",&chon);
            switch (chon)
            {
            case 1:
                ghi_ds();
                break;
            case 2:
                doc_ds();
                break;
            case 3:
                tim_sv();
                break;
            case 4:
                 break;

            }
        }
    }

