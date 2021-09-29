//Bai tap 03_.c (lab 02)
#include<stdio.h>
#include<conio.h>
  main()
{
	int a, b;
	printf("Nhap vao so thu nhat: ", &a);
	scanf("%d", &a);
	printf("Nhap vao so thu hai: ", &b);
	scanf("%d", &b);
	printf("Tong = %d\n", a+b);
	printf("Hieu = %d\n", a-b);
	printf("Tich = %d\n", a*b);
	printf("Thuong = %f\n", (float)a/b);
    getch();
	}
