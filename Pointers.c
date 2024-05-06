#include<stdio.h>
int main()
{
	int a=10,*p;
	p=&a;//Store Address value
	printf("\nValue of A:%d",a);
	printf("\nAddress of A:%d",&a);
	printf("\nValue of P:%d",p);
	printf("\nAddress of p:%d",&p);
	printf("\nDereferenc of p:%d",*p);
	return 0;
}
