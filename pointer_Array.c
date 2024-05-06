//Array of pointers
#include<stdio.h>
int main()
{
	int*p,a[]={10,20,30,40,50};
	p=&a;
	printf("\nSize of Integer:%d",sizeof(int));
	printf("\nSize of    a:%d",sizeof(a));
	printf("\nLength of  a:%d",sizeof(a)/sizeof(int));// to find length of array
	printf("\nAddress of a:%d",&a);
	printf("\nValue of   p:%d",p);
	printf("\nValue of *p:%d",*p);
	p++;//Increase the memory location
	printf("\nValue of p:%d",p);
	printf("\nValue of *p:%d",*p);
	printf("\nValue of *++p:%d",*++p);//here change the address
	printf("\nValue of ++*p:%d",++*p);//hera increaseing the value 
	return 0;
}
