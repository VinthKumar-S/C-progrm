#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character to Check Vowels are Not :");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
			printf("Yaa Right A is also one of the alphabet in Vowels..");
		break;
		case'e':
			printf("Yaa Right E is also one of the alphabet in Vowels..");
		break;
		case 'i':
			printf("Yaa Right I is also one of the alphabet in Vowels..");
		break;
		case 'o':
			printf("Yaa Right O is also one of the alphabet in Vowels..");
		break;
		case 'u':
			printf("Yaa Right U is also one of the alphabet in Vowels..");
		break;
		default:
			printf("\nIt is not Vowel..");	
	}
return 0;		
}
