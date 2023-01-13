#include<stdio.h>
#include<string.h>
struct stu
{
	char *ptr;
	int roll_no;
};

int main()
{
	struct stu s1;
	s1.roll_no = 01;
//	scanf("%s",s1.ptr);
	s1.ptr = "Yogesh";
	printf("%s\n",s1.ptr);
}
	
