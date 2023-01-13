#include<stdio.h>
int fun(char *s)
{
	char *s1;
	printf("Enter the string\n");
	scanf("%s",s1);
	printf("%s   %s\n",s,s1);
}
int main()
{
	fun("yogi");
}

