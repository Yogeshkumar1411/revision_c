#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *head=NULL;
void add(int data)
{
	struct node *ptr=malloc(sizeof(struct node));
	ptr->data=data;
	ptr->link=NULL;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		struct node *p=head;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=ptr;
	}
	

}
int main()
{
	add(5);
	add(6);
	add(67);
	add(65);
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
}

