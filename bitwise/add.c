#include<stdio.h>
int main()
{
	int number1,number2;
	printf("Enter the numbers:\n");
	scanf("%d%d",&number1,&number2);
	int carry;
	while(carry)
	{
		carry=number1&number2;
		number1=number1^number2;
		number2=carry<<1;
	}
	printf("%d\n",number1);
}
