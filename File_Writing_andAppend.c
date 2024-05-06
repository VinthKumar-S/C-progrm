#include<stdio.h>
int main()
{
	FILE *fb;
	fb=fopen("sample.txt","a");
	fprintf(fb,"Yes i am in..");
	fclose(fb);
	return 0;
}
