#include<stdio.h>
#include<string.h>
int main()
{
	char str[50]= "YogeshKumar, Embedded Software Engineer";
	printf("%s\n",str);
//	memset(str+13,"Device driver developer",23*sizeof(char));
//	printf("%s\n",str);
	char *ret = strstr(str,"Soft");
	printf("%s\n",ret);
}

