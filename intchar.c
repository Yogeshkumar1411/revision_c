#include<stdio.h>
int main()
{	int b=20;
	int *y = &b;
	char c = 'A';
	char *z = &c;
	y[0]=z[0];
	printf("%d\n",*z==*y);

	}
