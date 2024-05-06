#include<stdio.h>
#include<stdlib.h>
struct student
{
	char *name; //Though it is a char varible but it declared as a pointer so it have 4-bits
	int age;
	float per;
};
int main()
{
	struct student o;
	printf("\n Size of Student:%d",sizeof(o));
	printf("\n Size of Char:%d",sizeof(char));//4
	printf("\n Size of int:%d",sizeof(int));//4
	printf("\n Size of Float:%d",sizeof(float));//4
	o.name="Tutor joes";
	o.age=30;
	o.age=85.5;
	printf("\nName:%s",o.name);
	printf("\nAge:%d",o.age);
	printf("\nPersentage:%d",o.per);
	return 0;
}
