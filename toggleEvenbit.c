#include<stdio.h>
int main()
{
	int number=20,i=1;
	int temp=number;
	while(number)
	{
		temp = temp^(1<<i);
		printf("%d\n",temp);
		i=i+2;
		number=number>>i;
	}
	printf("%d\n",temp);
}

