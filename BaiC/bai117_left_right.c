#include<stdio.h>
#include<conio.h>
#include<string.h>

 void left (char s1[], char s2[],int n)
{
  int len = strlen (s1);
  if (n>len)
      n=len;
  for (int i=0;i<n;i++)
       s2[i]=s1[i];
  s2[n]='\0';
}
 void right (char s1[], char s2[],int n)
 {
  int len = strlen (s1);
  if (n>len)
      n=len;
  for (int i=0;i<n;i++)
       s2[i]=s1[i];
  s2[n]='\0';
 }
  int main()
{
  char str[] = "kernighan and ritchie";
  printf("chuoi goc:%s\n",str);
  char chuoi_con1[100], chuoi_con2[100]="";
  printf("left(str,chuoi_con1,9):");
  left(str,chuoi_con1,9);
  puts(chuoi_con1);
  printf("right(str,chuoi_con2,7):");
  right(str,chuoi_con2,7);
  puts(chuoi_con2);
  return 0;
}
