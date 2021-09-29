//Bai 07_.c lab 02
#include<stdio.h>
  main()
  {
  	float r, a, x, y, c1, c2, c3, s1, s2, s3;/* a la canh hinh vuong; r la ban kinh hinh tron; x,y la hai canh hinh chu nhat
  	                                            c1,s1,c2,s2,c3,s3 lan luot la chu vi va dien tich hình tron, vuong, chu nhat.*/
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%f", &r);
	printf("Nhap vao canh hinh vuong: ");
	scanf("%f", &a);
	printf("Nhap vao hai canh hinh chu nhat: ");
	scanf("%f %f", &x,&y);
	c1 = 2 * r * 3.14156;
	s1 = r * r * 3.14156;
	c2 = 4 * a;
	s2 = a * a;											      
  	c3 = ( x + y) * 2;
	s3 = x * y;
	printf("chu vi hinh tron la: %f\n", c1);
	printf("dien tich hinh tron la: %f\n", s1);
	printf("chu vi hinh vuong la: %f\n", c2);
	printf("dien tich hinh vuong la: %f\n", s2);
	printf("chu vi hinh chu nhat la: %f\n", c3);
	printf("dien tich hinh chu nhat la: %f", s3);                                             
  	return 0;
  	}
