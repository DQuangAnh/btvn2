//Bai 08 lab 02
#include<stdio.h>
  main()
  {
  	int a, b, c, d, e, g;
  	a = sizeof(int);
  	b = sizeof(float);
  	c = sizeof(double);
  	d = sizeof(char);
  	e = sizeof(long int);
  	g = sizeof(long double);
  	printf("Kich thuoc kieu du lieu int: %d byte\n", a);
  	printf("so nguyen: 15\n");
  	printf("Kich thuoc kieu du lieu float: %d byte\n", b);
  	printf("so thuc kieu float: 3.364627\n");
  	printf("Kich thuoc kieu du lieu double: %d byte\n", c);
  	printf("so thuc kieu double: 3.5463728716\n");
  	printf("Kich thuoc kieu du lieu char: %d byte\n", d);
  	printf("ky tu: A\n");
  	printf("Kich thuoc kieu du lieu long int: %d byte\n", e);
  	printf("Kich thuoc kieu du lieu double: %d byte\n", g);
  	return 0;
  	}
