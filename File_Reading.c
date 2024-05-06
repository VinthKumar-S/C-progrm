#include<stdio.h>
int main()
{
FILE *fb;
char c;
fb=fopen("sample.txt","r");
if(fb==NULL)
	printf("\nFile can't open or file not found..");
else
{
printf("The file is founded:\n");
while(1)
{
	c=fgetc(fb);
	if(c==EOF)
	break;
	printf("%c",c);
}
}	return 0; 
}
