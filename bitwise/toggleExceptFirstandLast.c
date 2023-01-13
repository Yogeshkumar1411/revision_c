#include<stdio.h>
int main()
{
	int number,count=0;
	printf("Enter the number\n");
	scanf("%d",&number);
	int temp=number;
	while(number)
	{
		count++;
		number>>=1;
	}
	printf("Count = %d\n",count);
	int x = (((1<<(count-1))-1) & (~((1<<1)-1)));
	printf("x = %d\n",x);
	printf("number = %d\n",temp);
	printf("Except first and last = %d\n",temp^x);
	printf("Toggle first and last = %d\n",temp^((~x)&127));
}
