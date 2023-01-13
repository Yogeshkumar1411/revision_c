#include<stdio.h>

int recursion(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*recursion(n-1);
	}
}
int main()
{
	printf("%d\n",recursion(6));
}

