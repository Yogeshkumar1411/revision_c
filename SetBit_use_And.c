
Not concluded
Not concluded
Not concluded
Not concluded
Not concluded
Not concluded

#include<stdio.h>
int main()
{
	int n=100;
	n=n&(1<<4);
	printf("%d\n",n);
}


/*
 *64 32 16 8 4 2 1
 *1  1  0  0 1 0 0
 *
 *0  0  1  1 0 1 1
 *0  0  1  0 0 0 0
 *0  0  1  0 0 0 0=
 *
 * */
