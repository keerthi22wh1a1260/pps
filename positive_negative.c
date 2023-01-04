#include<stdio.h>
int main()
{
	int number;
	printf("\n Enter a number: ");
	scanf("%d",&number);
	if(number>=0)
	{
		printf("Given number is positive.");
	}
	else
	{
		printf("Given number is negative.");
	}
	return 0;
}
