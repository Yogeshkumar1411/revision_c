#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int roll;
	char name[20];
}s,*sptr;
int main()
{
//	stu s1,*s2;
//	s2=&s1;
//	s2->roll=10;
//	printf("%d\n",s2->roll);
	s p;
	sptr stud;
	stud=&p;
//	stud=(s*)malloc(sizeof(s));
	stud->roll=10;
	printf("%d\n",stud->roll);
}
