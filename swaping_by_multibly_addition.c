#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two numbers for swaping:");
	scanf("%d%d",&a,&b);
	printf("A:%d B:%d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\nA:%d B:%d",a,b);
	return 0;
}
