#include<stdio.h>
#include<string.h>
int oddPalindrome(char *s, int len);
char *strrev(char *s,int len);
int main()
{
	char ptr[50];
	printf("Enter the string\n");
	scanf("%s",ptr);
	int len = strlen(ptr);
	printf("len = %d\n",len);
	if(oddPalindrome(ptr,len))
	{
		printf("Odd_palindrome\n");
	}
	else
	{
		printf("Not odd_palindrome\n");
	}
}
int oddPalindrome(char *s, int len)
{
	int i=0,j=1,k=0;
	char a[10],b[10];
	while(i!=len&&j!=len)
	{
		a[k] = s[i];
		b[k] = s[j];
		i=i+2;
		j=j+2;
		k++;
	}
	a[k]='\0';
	b[k]='\0';
//	char *z = strrev(b);
	printf("a = %s\nb = %s\n",a,b);
	if(strcmp(b,strrev(b,strlen(b))))
	{
	return 1;
	}
	else
	{
		return 0;
	}

	
}

char *strrev(char *s,int len)
{
	int i;
	for(i=0;i<len/2;i++)
	{
		char temp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = temp;
	}
	printf("strrev = %s\n",s);
	return s;

}
