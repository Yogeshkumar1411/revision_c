#include<stdio.h>
#define SIZE 10
void repeatedEle(int *a)
{
	int visited[SIZE];
	for(int i=0;i<SIZE;i++)
	{
		if(visited[i] == 0)
		{
			int count = 1;
			for(int j=i+1;j<SIZE;j++)
			{
				if(a[i] == a[j])
				{
					count++;
					visited[j]=1;
				}
			}
		
	if(count>1)
	printf("repeated %d ",a[i]);
	}
	}
	printf("\n");
}
int main()
{
	int a[SIZE];
	int i;
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	repeatedEle(a);
}
