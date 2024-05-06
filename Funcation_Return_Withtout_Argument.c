#include<stdio.h>
int main()
{
	int a;
	a=add();
	printf("The Total:%d",a);
	return 0;
}
int add()
{
	int a,b;
	printf("\nEnter the vlaue of A & B:");
	scanf("%d%d",&a,&b);
	return a+b;
}
