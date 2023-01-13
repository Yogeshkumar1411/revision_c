#include<stdio.h>
#include<string.h>
int main()

{
	char a[]="Yogesh";
	char b[10];
	int len = strlen(a);
	int i,j=0;
	for(i=len-1;i>=0;i--)
	{
		printf("hi\n");
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	printf("%s\n",b);
}
