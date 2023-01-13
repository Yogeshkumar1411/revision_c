#include<stdio.h>
int main()
{
	char *s="1a57xyz5bc23";
	int i=0,sum=0,dec=0;
	int prev=0;
	while(s[i]!='\0')
	{
		if(s[i]>=48&&s[i]<=57&&prev==0)
		{
			sum=(s[i]-48)+sum;
			prev=1;
		}
		if(s[i]>=48&&s[i]<=57&&prev==1)
		{

			dec=(s[i]-48)+(dec*10);
		}
		if(s[i]<48||s[i]>57)
		{
			sum=sum+dec;
			prev=0;
			dec=0;
		}
		i++;
	}
	printf("%d\n",sum);

}
