#include<stdio.h>
int conv(int number)
{
	return ((0xff&number)<<24)|((0xff00&number)<<8)|((0xff0000&number)>>8)|((0xff000000&number)>>24);
}

int main()
{
	int number = 0x12345678;
	printf("%x\n",conv(number));
}
