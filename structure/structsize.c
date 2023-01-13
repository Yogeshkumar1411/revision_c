#include<stdio.h>
#include<stdlib.h>
struct stu
{
	int a;
	char b;
	int c;
};

int main()
{
	struct stu *s1;
	printf("%d\n",sizeof(*s1));
	s1 = malloc(sizeof(*s1));
	s1->a = 20;
	s1->b = 'a';
	s1->c = 10;
	printf("%d\n",s1->a);
	printf("%c\n",s1->b);
	printf("%d\n",s1->c);
}
