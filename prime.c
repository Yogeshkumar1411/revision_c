#include<stdio.h>
#include"fun.h"
int main()
{
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			prime();
			break;
		case 2:
			fib_itre();
			break;
		case 0:
			return 0;
		default:
			printf("Inavlid\n");
	}
}
