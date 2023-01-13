#include<stdio.h>
void repeatedElements(int *a)
{
	int i,j,count,size=5,k=0,b[5]={0},l=0;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count=0;
				for(k=0;k<5;k++)
				{
					if(a[i]==b[k])
					{
						count++;
					}
				}
				if(count==0)
				{
					printf("repeated = %d\n",a[i]);
					b[l]=a[i];
					l++;
				}
			}

		}
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
