#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	if(number&(1<<31))
	{
		printf("negative number\n");
	}
	else
	{
		printf("positive number\n");
	}
}
