#include<stdio.h>
int convNum(char *s)
{
	int i,sum=0;
	for(i=0;s[i]!='\0';i++)
	{
		sum = (sum*10) + (s[i]-48);
	}
	return sum;
}
int main()
{
	char a[]="12345";
	char b[]="12345";
	int num1,num2;
	num1 = convNum(a);
	num2 = convNum(b);
	printf("%d\n",num1+num2);
}
