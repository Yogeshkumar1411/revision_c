#include<stdio.h>
void repeatedElements(int *a)
{
	int i,j,count,size=5,k;
	for(i=0;i<size;i++)
	{
		count=0;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				printf("repeated %d\n",a[i]);
				for(k=j;k<size-1;k++)
				{
					a[j]=a[k+1];
				}
				j--;
				size--;
			}
		}
#if 0
		if(count>1)
		{
			printf("%d\n",a[i]);
		}
#endif

	}
	size = sizeof(a)/sizeof(int);
			printf("j = %d size = %d\n",j,size);
	for(i=0;i<size;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}

int main()
{
	int a[5];
	printf("Enter the elements:\n");
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	repeatedElements(a);
}
