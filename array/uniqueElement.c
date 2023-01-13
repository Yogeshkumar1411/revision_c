#include<stdio.h>
#define SIZE 10

void uniqueElement(int *a)
{
	int i,j,count=1;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			if(a[i]==a[j]&&i!=j)
			{
				break;
			}
			if(j==(SIZE-1))
			{
				printf("unique elements in an array [%d] : %d",count,a[i]);
			       count++;
			}
		}
	}		

}

int main()
{
	int a[SIZE],i;
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	uniqueElement(a);
}
