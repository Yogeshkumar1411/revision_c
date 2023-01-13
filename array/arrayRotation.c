#include<stdio.h>
#define SIZE 10
void arrayRotation(int *a,int shift)
{
	int i;
	while(shift)
	{
	int temp = a[0];
	for(i=0;i<SIZE;i++)
	{
		a[i] = a[i+1];
	}
	a[SIZE-1] = temp;
	for(i=0;i<SIZE;i++)
		printf("%d ",a[i]);
	printf("\n");
	shift--;
	}
}
int main()
{
	int a[SIZE];
	for(int i=0;i<SIZE;i++)
	scanf("%d",&a[i]);
	arrayRotation(a,2);
//	arrayRotation(a);
}

