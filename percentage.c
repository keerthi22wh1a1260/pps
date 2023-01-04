#include<stdio.h>
int main()
{    
	int percent;
	printf("enter percent of student");
	scanf("%d",&percent);
	if(percent<40)
	{
        printf("student is failed");
	}
	else if(percent<60)
	{
	printf("student secured third class");
	}
	else if(percent<70)
	{
	printf("student secured second class");
	}
	else
	{
	printf("student secured and reached distinction");
        }

}
