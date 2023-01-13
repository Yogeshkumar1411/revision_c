#include<stdio.h>

#define M 3
#define N 3

#define P 3
#define Q 3

void gettingArrayValue(int a,int b,int (*arr)[3])
{

	int i,j;
	printf("Getting array elements....\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Enter the value for [%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
}
void print(int* a)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void printArray(int a,int b,int (*arr)[b])
{
	int i,j;
	printf("Printing the array...\n");
        for(i=0;i<a;i++)
        {
                for(j=0;j<b;j++)
                {
                        printf("%d ",arr[i][j]);
                }
		printf("\n");
        }
	printf("\n");


}
int arrayMultiplication(int (*arr1)[3],int (*arr2)[3],int (*arr3)[3])
{
	int i,j,k,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+arr1[i][k]*arr2[k][j];
			}
			printf("sum = %d\n",sum);

			arr3[i][j]=sum;
		}
	}

}
int main()
{
	int arr1[M][N],arr2[P][Q],arr3[3][3];

	int a[]={1,2,3,4,5};
	int *p = &a;
//	print(&a);
#if 1
	gettingArrayValue(M,N,arr1);

	gettingArrayValue(P,Q,arr2);

	printArray(M,N,arr1);

	printArray(P,Q,arr2);

	if(N==P)
	{
		arrayMultiplication(arr1,arr2,arr3);
		printArray(M,N,arr3);
	}
	else
	{
		printf("Invalid\n");
	}
#endif
}

