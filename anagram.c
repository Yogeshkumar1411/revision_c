#include<stdio.h>
#include<string.h>
int main()
{
	char ptr[10];
	char ptr1[10];
	printf("Enter the strings\n");
	scanf("%s%s",ptr,ptr1);
	if(strlen(ptr)==strlen(ptr1))
	{
		int i,j;
		for(i=0;i<strlen(ptr);i++)
		{
			for(j=i+1;j<strlen(ptr);j++)
			{
				if(ptr[i]>ptr[j])
				{
					char temp = ptr[j];
					ptr[j] = ptr[i];
					ptr[i] = temp;
				}
				if(ptr1[i]>ptr1[j])
				{
                                        char temp = ptr1[j];
                                        ptr1[j] = ptr1[i];
                                        ptr1[i] = temp;
                                }
			}
		}
		printf("After sorting ptr = %s   ptr1 = %s\n",ptr,ptr1);
		if(strcmp(ptr,ptr1) == 0)
		{
			printf("Anagram\n");
		}
		else
		{
			printf("Not an anagram\n");
		}
	}
	else
	{
			printf("Not an anagram\n");
		}


}
