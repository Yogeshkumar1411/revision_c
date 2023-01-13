#include<stdio.h>
int prime()
{
	int number,count=0,i;
	printf("Enter the number:");
	scanf("%d",&number);
	for(i=2;i<=number;i++)
	{
		if(number%i==0)
		{
			count++;
		}
		if(count>1)
			break;
	}
	if(count==1)
	{
		printf("Prime number\n");
	}
	else
		printf("Not a prime number\n");
}
/////////////////////////////////////////////////
int fib_itre()
{
	int number,num=0,i,result=0;
	printf("Enter the number\n");
	scanf("%d",&number);
	int prev=1;
	for(i=0;i<=number;i++)
	{
		
		printf("%d ",result);			
		num = prev;
		prev=result;
	       result =	num+prev;
		
	}
	printf("\n");
}
////////////////////////////////////////////////////
int fib_recur(int n)
{
	

}
	
