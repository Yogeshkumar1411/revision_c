#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	        char *ptr;
		int i,j,k;
		ptr=(char *)malloc(sizeof(char)*50);
        printf("Enter the string\n");
        scanf("%s",ptr);
        for(i=0;ptr[i]!='\0';i++)
        {
                for(j=i+1;ptr[j]!='\0';j++)
                {
                        if(ptr[i]==ptr[j])
                        {
                                for(k=j;ptr[k]!='\0';k++)
                                {
                                        ptr[k] = ptr[k+1];
                                }
				ptr[k]='\0';
                                j--;                                
                        }
                }
        }
        printf("ptr = %s\n",ptr);
	free(ptr);
}
