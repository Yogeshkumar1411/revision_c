#include<stdio.h>
void gettingArrayValue(int (*arr)[2][2])
{

	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("Enter the value for the index arr[%d][%d[%d]:",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}				
	
}
void print(int (*arr)[2][2])
{
	int i,j,k;
        for(i=0;i<3;i++)
        {
                for(j=0;j<2;j++)
                {
                        for(k=0;k<2;k++)
                        {
                             printf("%d ",arr[i][j][k]);
                        }
			printf("\n");
                }
		printf("\n");
        }
}
int main()
{
	int arr[3][2][2];//=>3 2d-array=>2 1d-array each
	gettingArrayValue(arr);
	print(arr);
}
