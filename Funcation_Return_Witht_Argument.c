#include<stdio.h>
int add(int,int);
int main()
{
		int a,b;
	printf("\nEnter the value of A&B:");
	scanf("%d%d",&a,&b);
	a=add(a,b);
	printf("\nTotal:%d",a);
	return 0;
}
int add(int a,int b)w
{
	return a+b;
}
