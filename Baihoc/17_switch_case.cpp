#include<stdio.h>

int main()
{
    int n;
    printf("nhap vao so n ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("hom nay la cn");
        break;
    case 2:
        printf("\nhom nay là t2");
        break;
    case 3:
        printf("\nhom nay là t3");
        break;        
    case 4:
        printf("\nhom nay là t4");
        break;        
    case 5:
        printf("\nhom nay là t5");
        break;
    case 6:
        printf("\nhom nay là t6");
        break;
    case 7:
        printf("\nhom nay là t7");
        break;
    case 8:
        printf("\nhom nay là cn");
        break;                                            
    default:
    printf("ban nhap chua dung");
        //break;
    }
}