#include<stdio.h>
//int const a=0;
int main()
{
	volatile int const confusion=555;
	int c=0;
	printf("%d\n",confusion);
}
