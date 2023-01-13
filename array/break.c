#include<stdio.h>
int main()
{
	int i,j;
	for(j=0;j<10;j++)
	{
		for(i=0;i<10;i++)
		{
			printf("%d %d\n",i,j);
			if(i==4)
			{
				break;
			}
		}
	}
}

