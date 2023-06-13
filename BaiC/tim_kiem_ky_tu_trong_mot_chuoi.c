#include"stdio.h"
#include"conio.h"
#include"string.h"

void TimKyTu (const char *s , char c)
{
    const char* p=s;
    while ((p = strchr (p,c))!= NULL)
    {
        printf("%u ",p - s);
        p++;
    }
    putchar('\n');
}
int main()
{
    char s[100] ,*t,c;
    printf("nhap chuoi: ");
    fgets(s, 100, stdin);
    if ((t = strrchr (s, '\n'))!=NULL) *t = '\n';
    printf("tim ky tu ? ");
    scanf("%c",&c);
    printf("vi tri xuat hien: ");
    TimKyTu(s ,c );
    return 0;
}
