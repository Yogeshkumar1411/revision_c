#include<stdio.h>
int main()
{
	unsigned int a = 0xABCD5A5A;
	unsigned int fil = 0xF0000000;
	unsigned int final1 = (fil>>0&a)>>28 | (fil>>4&a)>>20 | (fil>>8&a)>>12 | (fil>>12&a)>>4;
	unsigned int final2 = (fil>>16&a)<<4 | (fil>>20&a)<<12 | (fil>>24&a)<<20 | (fil>>28&a)<<28;
	printf("180 degree rot: %X\n",final1|final2);
	printf("little end to big end: %X\n",((a&0xFF)<<24)|((a&0xFF00)<<8)|((a&0xFF0000)>>8)|((a&0xFF000000)>>24));
}
