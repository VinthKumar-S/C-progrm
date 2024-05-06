#include <stdio.h>
int main()
{
	char alp[5]="ABCDE";
	int i,j,k,l;
	for(j=4;j>=0;j--)
	{
			for(i=0;i<=j;i++)
			{
				printf("%c",alp[i]);
				printf(" ");
			}
			
			for(l=j;l<4;l++)
			{
				printf("    ");
			}
			
			for(k=j;k>=0;k--)
			{
					printf("%c",alp[k]);
				printf(" ");
			}
				
	printf("\n");
	}
	return 0;
}
