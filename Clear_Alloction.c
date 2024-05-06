#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("\nEnter the Limit:");
	scanf("%d",&n);
	int *ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory Not Available..");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter a Integer:");
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d : %d",&ptr+i,*(ptr+i));
	}
	return 0;
}
