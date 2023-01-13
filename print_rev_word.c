#include<stdio.h>
int main()
{
	char a[]="Hello DK, How are you?";
	int b[10],j=0;
	int i,count;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==32)
		{
			count++;
			b[j]=i;
			j++;
		}
	}
	b[j]=i;

	int start,end,m;
	for(;j>=0;j--)
	{
		start = b[--j];
		end = b[++j];
		if(j==0)
			m=j;
		else
			m=start+1;
		for(;m<=end-1;m++)
		{
			printf("%c",a[m]);
		}
		printf(" ");
	}	
	printf("end\n");
}
