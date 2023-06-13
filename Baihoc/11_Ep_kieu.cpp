// short -> int -> long -> float -> double
#include"stdio.h"
#include"conio.h"
int main()
{
	int a,b;
	printf("nhap vao so a=");
	scanf("%d",&a);
	printf("nhap vao so b=");
	scanf("%d",&b);
	
	float ketqua=(float)a/b;
	int ketqua2=(int)ketqua;
	
	printf("%d/%d=%.2f",a,b,ketqua);
	printf("\n ketqua2= %d",ketqua2);
}
