#include<stdio.h>
#include<string.h>
int main()
{
	char c[20],a[20];
	printf("Enter the two Strings:");
	gets(c);//IT use to get the input with space
	gets(a);
	printf("\nThe Comparition:%d",strcmp(c,a));
	printf("\nLength:%d",strlen(c));
	printf("\nUpperCase:%s",strupr(c));
	printf("\nLowerCase:%s",strlwr(c));
	printf("\nCopy:%s",strcpy(c,a));
	printf("\nReverse:%s",strrev(c));
	strcat(a,c);
	printf("\nConcatination:%s",a);
	return 0;
}
