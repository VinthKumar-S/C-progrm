#include<stdio.h>
int main()
{
	FILE *fb;
	fb=fopen("sample.txt","w");
	fprintf(fb,"Hello Welcome to our platform..\n");
	fclose(fb);
	return 0;
}
