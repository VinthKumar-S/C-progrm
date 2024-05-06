#include<stdio.h>
int main()
{
	int a[30][30],b[30][30],c[30][30],r1,c1,i,j;
	printf("Enter the rows and colums:\n");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter the elements of frist matrix:");
	for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
	{
			scanf("%d",&a[i][j]);
	}
	}
	printf("\nEnter the elements of the second matrix:");
		for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
	{
			scanf("%d",&b[i][j]);
	}
	}
			for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
	{
			c[i][j]=a[i][j]+b[i][j];
	}
	}
	printf("\nThe addition of the matrix:");
			for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
	{
			printf("\n%d",c[i][j]);
	}
	}
	return 0;
}
