#include<stdio.h>
int main()
{
	char *p = "Void pointer";
	void *ptr = &p;
	printf("%s\n",*(char*)ptr);
}
