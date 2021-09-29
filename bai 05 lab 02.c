//Bai 05_.c lab 02
#include<stdio.h>
   main()
   {
   	int top, bottom, height;//top la day be, bottom la day lon, height la chieu cao.
   	printf("Nhap vao do dai day be: ");
   	scanf("%d", &top);
   	printf("Nhap vao do dai day lon: ");
   	scanf("%d", &bottom);
   	printf("Nhap vao chieu cao: ");
   	scanf("%d", &height);
   	printf("Dien tich hinh thang = %0.3f",(float)( bottom + top ) * height /2);
   	return 0;
   	}
