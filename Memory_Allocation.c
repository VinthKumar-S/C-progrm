#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("Enter the limit:");
	scanf("%d",&n);
	int *ptr=(int*)malloc(n*sizeof(int));//void*malloc -type convert into int
	if(ptr==NULL)
	{
		printf("Memory not Available....");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter an Integer:");
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	return 0;
}
