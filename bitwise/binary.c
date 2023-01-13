#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number\n");
	scanf("%d",&number);
	int a[50],i=0;
	while(number)
	{
		a[i]=number&1;
		number=number>>1;
		i++;
	}
	for(i=i-1;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");
}
