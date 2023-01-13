#include<stdio.h>
int main()
{
	int arr[3][2]={3,6,9,12,15,18};
	printf("%d\n",*(arr+1)[1]);
	printf("%d\n",**(arr+2));
}	
