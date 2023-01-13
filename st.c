#include<stdio.h>
#include<string.h>
struct stu
{
	int data;
	char *name;
	int id;
};
int main()
{
	struct stu *s1,s2;
	s1=&s2;
	s1->data=10;
	s1->name="Yogesh";
//	memcpy(s2.name,"Yogesh",7);
	printf("%d\n",s1->data);
	printf("%s\n",s2.name);
}
