#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number\n");
	scanf("%d",&number);
	printf("result = %d\n",number&(number+1));
}
