#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	while(number)
	{
		printf("%d\n",number);
		number=number>>1;
	}
}
