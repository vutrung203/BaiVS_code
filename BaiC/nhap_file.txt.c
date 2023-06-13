#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{

    printf("CHUONG TRINH SAP XEP DAY SO TU FILE\n");
    printf("-----------------------\n");
    int a[1000];
    FILE *file_input, *file_output ;
    file_input = fopen("Day so.txt", "r");
    if(file_input == NULL)
    {
      printf("File khong ton tai!");
      exit(1);
}
int n=0;
int num;
while (fscanf(file_input, "%d", &num)!=EOF)
{

    a[n]=num;
    printf("8d", num);
    n++;

}
fclose(file_input);
int tg;
for (int i=0;i<n-1;i++)
    for (int j=i+1;j<n;j++)
    if (a[i]>a[j])
{

    tg=a[i]; a[i]=a[j]; a[j]=tg;

}
file_output = fopen("Day so sx.txt", "w");
if(file_output == NULL)
{

    printf("File khong ton tai!");
    exit(1);
}
for (int i=0; i<n;i++) fprintf("%d ",a[i]);
fclose(file_output);
}
