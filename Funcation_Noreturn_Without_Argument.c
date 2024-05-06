#include<stdio.h>
void add()
{
	int a,b,c;
	printf("\nEnter the value of A&B:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\nTotal:%d",c);
}
int main()
{
	add();
	return 0;
}
