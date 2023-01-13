#include<stdio.h>
int main()
{
	int number,n;
	printf("Enter the number\n");
	scanf("%d",&number);
	printf("Enter the power\n");
	scanf("%d",&n);
	int result = number*(1<<n);
	printf("result = %d\n",result);
}
