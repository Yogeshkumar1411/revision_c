#include<stdio.h>
#include<string.h>
int strcomp(char *s,char *s1)
{
	int i;
        for(i=0;s[i]!='\0'&&s1[i]!='\0';i++)
        {
                if(s[i]>s1[i])
                {
			printf("s = %d\n",i);
                        return s[i]-s1[i];
                }
                else if(s[i]<s1[i])
                {
			
			printf("s1 = %d\n",i);
                        return s1[i]-s[i];
                }
        }
	return 0;


}
int main()
{
	char s[]="yogesh";
	char s1[]="yogesh";
	int i;
	if(strlen(s)==strlen(s1))
	{
		i=strcomp(s,s1);
	printf("api = %d\n",i);
	}
	printf("in = %d\n",strcmp(s,s1));
	
	
}

