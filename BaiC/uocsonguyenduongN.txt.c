#include<conio.h>
#include<stdio.h>

int main()
{
    int i, n;
    do
    {
    printf("\nNhap n(0 < n): ");
    scanf("%d", &n);
    }
    while(n <= 0);
    i = 1;

    while(i <= n)
    {
        if(n % i == 0)
            printf("%4d", i);
            i++;
    }
    return 0;
}
