#include"conio.h"
#include"stdio.h"

int main()
{
	int a=1;
	int b=0;
	int c=1;
	
	printf("\n %d && %d = %d",a,b,a&&b);  //tat ca deu dung
	printf("\n %d && %d = %d",a,c,a&&c);

	printf("\n %d || %d = %d",a,b,a||b);   // chi co it nhat 1 toan dung
	printf("\n %d || %d = %d",a,c,a||c);
	
	printf("\n n! %d = %d",a,!a);          // phu dinh gia tri toan hang
	printf("\n n! %d = %d",b,!b);
}
