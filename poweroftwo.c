#include<stdio.h>
int main()
{
	int n=257;
	if(!(n&(n-1)))
	{
		printf("power of two\n");
	}
	else
	{
		printf("no\n");
	}
}
