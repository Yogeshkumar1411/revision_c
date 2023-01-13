#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number\n");
	scanf("%d",&number);
	int count=0,res=0;
	for(int temp = number;temp>0;temp>>=1)
	{
		if(count%2==1)
			res = res|(1<<count);
		count++;
	}
	printf("result = %d\n",number^res);
}

