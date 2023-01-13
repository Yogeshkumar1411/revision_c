#include"header.h"
int main()
{
	int choice,n;
	printf("No of elements:\n");
	scanf("%d",&n);
	int array[n];
	printf("Enter the array elements\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int size = sizeof(array)/sizeof(int);
	char *ptr;
	ptr=(char *)malloc(sizeof(char)*50);
	printf("Enter the string\n");
	scanf("%s",ptr);
	printf("\n\n\n1. Delete duplicate\n2. Reverse array\n\n\nEnter the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: deletedup(array,size,ptr);
			break;
		case 2: reverseArray(array,size,ptr);
			break;
		case 3: printRepeated(array,size,ptr);
			break;
		default:
			printf("invalid\n");
			break;
	}
}
