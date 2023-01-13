#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr=NULL;
	printf("%d\n",ptr);
	ptr=(int)malloc(sizeof(int));
	printf("%d\n",ptr);
	ptr=(int)malloc(sizeof(int));
	printf("%d\n",ptr);
}
