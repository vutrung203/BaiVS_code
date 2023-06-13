#include"stdio.h"

int main()
{
	int a ,b;
	printf("nhap so a =");
	scanf("%d",&a);
	printf("nhap so b=");
	scanf("%d",&b);
	printf("\n %d==%d la %d",a ,b,a==b);
	printf("\n %d>%d la %d",a ,b,a>b);
	printf("\n %d<%d la %d",a ,b,a<b);
	printf("\n %d>=%d la %d",a ,b,a>=b);
	printf("\n %d<=%d la %d",a ,b,a<=b);
	printf("\n %d!=%d la %d",a ,b,a!=b);

}