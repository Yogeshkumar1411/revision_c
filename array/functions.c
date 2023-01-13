#include"header.h"
int deletedup(int *a,int size,char *ptr)
{
	int i,j,k;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<size-1;k++)
				{
					a[k]=a[k+1];
				}
				size--;
				j--;
			}
		}
	}
	printf("array = ");
	for(i=0;i<size;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
      ////////////////string////////////////
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

//////////////////////////////////////////////////////

void reverseArray(int *a,int size,char *ptr)
{
	int i;
	for(i=0;i<size/2;i++)
	{
		int temp = a[size-i-1];
		a[size-i-1] = a[i];
		a[i] = temp;
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	int length = strlen(ptr);
	for(i=0;i<length/2;i++)
	{
		char temp = ptr[length-i-1];
		ptr[length-i-1] = ptr[i];
		ptr[i] = temp;
	}
	printf("\nstring = %s\n",ptr);
	free(ptr);
}

//////////////////////////////////////////////////////


void printRepeated(int *a,int size,char *ptr)
{
       int i,j,count,k=0,b[5]={0},l=0;
        for(i=0;i<size;i++)
        {
                for(j=i+1;j<size;j++)
                {
                        if(a[i]==a[j])
                        {
                                count=0;
                                for(k=0;k<l;k++)
                                {
                                        if(a[i]==b[k])
                                        {
                                                count++;
                                        }
                                }
                                if(count==0)
                                {
                                        printf("repeated = %d\n",a[i]);
                                        b[l]=a[i];
                                        l++;
                                }
                        }

                }
        }



}

