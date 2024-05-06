#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two numbers to check contional operator:");
	scanf("%d%d",&a,&b);
	c=a>b?a:b;
	printf("\nGreatestnumber is:%d",c);
	return 0;
}
