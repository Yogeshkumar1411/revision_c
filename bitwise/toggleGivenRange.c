#include<stdio.h>
int main()
{
	int number,l,r;
	printf("Enter the number\n");
	scanf("%d",&number);
	printf("Enter the range l and r\n");
	scanf("%d%d",&l,&r);
	int x = ((1<<r)-1)   &  (~((1<<(l-1))-1));
	printf("result = %d\n",number^x);
}
