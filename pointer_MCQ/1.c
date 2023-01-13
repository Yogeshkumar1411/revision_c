#include<stdio.h>
int main()
{
	int a[] = {1,3,5,7,9,11};
	int *p[] = {a,a+1,a+2,a+3,a+4,a+5};
	int **pp = p;
	printf("%ld %ld %ld %ld\n",pp,*pp,p,a);
	pp++;
	printf("%d %d %d\n",pp-p,*pp-a,**pp);
	printf("%ld %ld %ld\n",pp,*pp,p);
}
