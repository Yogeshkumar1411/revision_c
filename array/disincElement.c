#include<stdio.h>
#define SIZE 10
void distinctElement(int *a)
{
	int i,j;
	for(i=0;i<=SIZE;i++)
	{
		for(j=i+1;j<=SIZE;j++)
		{
			if(a[i]==a[j])
			{
				break;
			}
			if(j==SIZE)
			{
				printf("the distinct %d\n",a[i]);
			}
		}
	}
}
int main()
{
	int a[SIZE];
	int i;
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	distinctElement(a);
}

