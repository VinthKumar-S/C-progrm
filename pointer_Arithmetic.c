#include<stdio.h>
int main()
{
	int a=10,b=20,*p,*r,*q;
	p=&a;
	r=p+1;//Memory address are changed
	printf("\nSize of Integer:%d",sizeof(a));
	printf("\nP value of:%d",p);
	printf("\nR value add:%d",r);
	r=p-1;//Memory address are changed
	printf("\nP value of:%d",p);
	printf("\nR value add:%d",r);
	return 0;
}
