#include<stdio.h>
int main()
{
	int c,d,b;
	printf("Enter the  two numbers for interchange their values:");
	scanf("%d%d",&c,&d);
	printf("C:%d D:%d",c,d);
	b=c;//5
	c=d;//10
	d=b;//5
	printf("\nC:%d D:%d",c,d);
	return 0;
}
