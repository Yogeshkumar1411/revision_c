#include<stdio.h>
#include<unistd.h>
int main()
{
 if(vfork()==0)
 {
	 printf("child is created\n");
 }
 else
 {
	 printf("parent created\n");
}
}
