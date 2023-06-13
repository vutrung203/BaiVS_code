#include"stdio.h"
 int main ()
 {
 	int x;
 	float y;
 	char c;
 	
 	// nhap vao ky tu
	  printf("nhap vao ky tu: ");
	 scanf("%c",&c);
	 printf("gia tri c da nhap %c: ",c);
 	
 	// nhap vao so nguyen
 	printf("\n nhap gia tri cua x: ");
	 scanf("%d",&x);
	 printf("gia tri x da nhap:%d ",x);
	 
	 // nhap vao so thuc
	 printf("\n nhap vao so thuc y: ");
	 scanf("%f",&y);
	 printf("gia tri x da nhap %.2f: ",y);
	 
	 // nhap du lieu mot hang
	 float x1,x2,x3;
	 printf("\n nhap vao gia tri x1 ,x2 ,x3");
	 scanf("%f%f%f", &x1, &x2, &x3);
	 printf("x1=%f,x2=%f,x3=%f", x1 ,x2 ,x3);	 
 }
