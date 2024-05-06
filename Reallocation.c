#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int *ptr=(int *)malloc(3*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not Available");
		exit(1);
	}
	printf("\nEnter 3 Nos:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("Enter two more values for After the Reallocation:\n");
	ptr=(int *)realloc(ptr,5*sizeof(int));
	for(i=3;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<5;i++)
	{
		printf("\t%d",*(ptr+i));
	}
	return 0;
}
