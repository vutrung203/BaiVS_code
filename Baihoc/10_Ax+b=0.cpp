#include"stdio.h"
#include"conio.h"

int main()
{
	float a,b,x;  // khai bao bien
	// nhap du lieu
	printf("nhap vao chuong trinh ax+b=0");
	printf("\na=");
	scanf("%f",&a);
	printf("\nb=");
	scanf("%f",&b);
	
	// xu ly 
	x=-b/a;
	
	// xuat du lieu ra man hinh
	printf("x=%.2f",x); 
	
}

