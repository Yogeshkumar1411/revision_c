#include<stdio.h>
int main()
{
	int number,mod,sum=0;
	scanf("%d",&number);
	while(number)
	{
		mod=number&1;
		sum=mod+(10*sum);
		number=number>>1;
	}
	printf("%d\n",sum);
}

