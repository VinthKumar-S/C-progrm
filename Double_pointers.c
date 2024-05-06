#include<stdio.h>
int main()
{
	int a=10,*p;//Single pointers
	p=&a;//Store Address value
	printf("\nValue of A:%d",a);
	printf("\nAddress of A:%d",&a);
	printf("\nValue of P:%d",p);
	printf("\nAddress of p:%d",&p);
	printf("\nDereferenc of p:%d",*p);
	
	int **q=&p;//Double pointers
		printf("\nAddress of q:%d",&q);
	printf("\nDereferenc of q:%d",**q);
	
	int ***r=&q;//Trible pointers
		printf("\nAddress of r:%d",&r);
	printf("\nDereferenc of r:%d",***r);
	return 0;
}
