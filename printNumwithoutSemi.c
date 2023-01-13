#include<stdio.h>
int printNumber(int n)
{
	if(n<=10 && printf("%d \n",n) && printNumber(n+1)){}
}

int main()
{
	if(printNumber(1))
	{
	}
}
