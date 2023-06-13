// ax+b =0
#include"stdio.h"
#include"conio.h"
int main()
{
	float a,b,x;
	printf("nhap vao he so phuong trinh ax + b = 0");
	printf("\a=");
	scanf("%f",&a);
	printf("\b=");
	scanf("%f,&b");
	if (a!=0)
	{
		x= -b/a;
		printf("phuong trinh co nghiem x = %.2f",x);
    }
		else
		{
			if(b==0)
			{
				printf("phuong trinh co vo so nghiem");
			}
			else
			{
				printf("phuong trin vo nghiem");
			}
		}
	
}
