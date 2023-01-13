#include<stdio.h>

int fib(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else
		return fib(n-1)+fib(n-2);
}
int main()
{
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	for(int i=0;i<number;i++)
	{
		printf("%d ",fib(i));
	}
	printf("\n");
}
