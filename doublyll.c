#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL;

struct node *insert(int data)
{
	struct node *ptr=malloc(sizeof(struct node));
	ptr->data=data;
	ptr->prev=NULL;
	ptr->next=NULL;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		ptr->next=head;
		head->prev=ptr;
		head=ptr;
#if 0
		struct node *p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=ptr;
		ptr->prev=p;
#endif
	}
}

int main()
{
	insert(100);
	insert(10);
	insert(15);
	insert(20);
	insert(30);
	struct node *p=head;
	while(p)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}

