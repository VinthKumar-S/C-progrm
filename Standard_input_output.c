#include<stdio.h>
int main()
{
	int a;
	char c;
	char name[50];
	printf("\nEnter the value of A:");
	scanf("%d",&a);
	printf("\nA:%d",a);
	printf("\nEnter the character:");
	fflush(stdin);
	c=getchar();
	putchar(c);
	printf("\nEnter the Name:");
	fflush(stdin);
	gets(name);
	puts(name);
	return 0;
}
