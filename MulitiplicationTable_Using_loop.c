#include<stdio.h>
int main()
{
	int i,t,n;
	printf("\nWhich table you want?:");
	scanf("%d",&t);
	printf("\nEnter the Limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d X %d=%d",t,i,(t*i));
	}
	return 0;
}
