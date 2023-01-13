#include<stdio.h>
#include<unistd.h>
int natural(int n)
{
	if(n==0)
		return 1;
	else
	{
		sleep(2);
		printf("%d \n",n);
		return natural(n-1);
	}
}
int main()
{
	int number=10;
	natural(number);
}
