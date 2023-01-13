#include<stdio.h>
#include<stdlib.h>
int *p=NULL;
int main()
{
	int *a=NULL;
//	p=(int *)malloc(sizeof(int));
	*p=10;
	a=p;
	*a=20;
	printf("%d\n",*p);
}

