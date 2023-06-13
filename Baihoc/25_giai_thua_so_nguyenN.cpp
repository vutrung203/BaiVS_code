#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{
	int n,giaiThua;
    do
    {
    	printf("nhap vao so n(n>0)");
    	scanf("%d",&n);
	}
	while(n<0);
	giaiThua=1;
    for(int i = 1; i <= n; i++) 
	{
        giaiThua = giaiThua * i;
    }
    printf( "Giai thua = %d",giaiThua);
    return 0;
}
