#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("*");
		if(i==0||i==9)
		{

			printf(" ");
			for(j=0;j<10;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		if(i>=1&&i<=8)
		{
			for(j=0;j<10;j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	printf("\n");
}
