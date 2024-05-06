#include<stdio.h>
#include<stdlib.h>
int *getting_value()
{
	int i;
	int *ptr=(int *)malloc(3*sizeof(int));
	printf("Enter the three 3 NO:\n");
	for(i=0;i<3;i++)
	{
		printf("Enter a Integer:");
		scanf("%d",ptr+i);
	}
	return ptr;
}
int main()
{
	int i,n=0;
	int *ptr=getting_value();
	for(i=0;i<3;i++)
	{
		n+=*(ptr+i);
	}
	printf("Total:%d",n);
	free(ptr);
	ptr=NULL;
	return 0;
}
