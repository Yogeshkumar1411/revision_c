#include<stdio.h>
struct student{
	char *name;
	int roll_no;
}a;

int main()
{
	scanf("%s %d",a.name,&a.roll_no);
	printf("%s\n%d\n",a->name,a.roll_no);
}

