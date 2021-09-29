//Bai 06_.c lab 02
#include <stdio.h>
 main()
 {
 	float a, b, c, tb, tong;//a,b,c lan luot la diem toan ly va hoa.
 	printf("Nhap vao diem toan: ");
 	scanf("%f", &a);
 	printf("Nhap vao diem ly: ");
 	scanf("%f", &b);
 	printf("Nhap vao diem hoa: ");
 	scanf("%f", &c);
 	tong= a + b + c; 
 	tb = tong / 3;
 	printf("Tong diem ba mon la: %f\n", tong);
 	printf("Diem trung binh: %f", tb);
 	return 0;
 }

