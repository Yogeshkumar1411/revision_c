#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *head=NULL;
struct node *head1=NULL;
struct node *head3=NULL;

void add(int data)
{
	struct node* ptr= malloc(sizeof(struct node));
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
void add1(int data)
{
	        struct node* ptr= malloc(sizeof(struct node));
        ptr->data=data;
        ptr->link=NULL;
        if(head1==NULL)
        {
                head1=ptr;
        }
        else
        {
                struct node *p=head1;
                while(p->link!=NULL)
                {
                        p=p->link;
                }
                p->link=ptr;
        }
}

int main()
{
	add(4);
	add(5);
	add(6);
	add1(6);
        add1(2);
        add1(8);
        
	int a=0
}
