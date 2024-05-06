#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50},i;
	int *p;
	p=&a;
	for(i=0;i<sizeof(a)/sizeof(int);i++)
	{
		printf("\n%d",*p++);
	}
	return 0;
}
