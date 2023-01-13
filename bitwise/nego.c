#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	printf("%d  %x\n",~number,~number);
}
