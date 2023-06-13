#include"stdio.h"
int main()
{
	int n;
	printf("nhap vao so n=");
	scanf ("%d",&n);
	
	// nho hon
	if (n<20)
	{
		printf("\n so nho hon 20");
	}
	
	// chan le
	if(n%2==0)
	{
		printf("\n la so chan");
	}
	else
	{
		printf("\n la so le");
	}

}
