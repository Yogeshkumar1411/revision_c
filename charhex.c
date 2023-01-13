#include<stdio.h>
int main()
{
	unsigned int a = 0x44434241;
	void *ptr = &a;
	for(int i=0;i<4;i++)
	{
		printf("%c\n",*(char *)ptr++);
	}
	printf("\n");




	unsigned int b = 0xABCD5A5A;
	void *ptr1 = &b;
	char c[4];
	for(int i=0;i<4;i++)
	{
		c[i] = *(char *)ptr1++;
	}
	for(int i=0;i<4;i++)
	{
		printf("%x\n",c[i]);
	}

}



