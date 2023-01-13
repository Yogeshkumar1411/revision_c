#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL;
void addMiddle(int data,int node)
{
	struct node *ptr=malloc(sizeof(struct node));
	ptr->data=data;
	ptr->link=NULL;
	struct node *p=head;
	int count =0;
	while(count!=node)
	{
		p=p->link;
		count++;
	}
	ptr->link=p->link;
	p->link=ptr;
	

}

void add(int data)
{
	struct node *ptr=malloc(sizeof(struct node));
	struct node *p=NULL;
        ptr->data=data;
        ptr->link=NULL;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		p=head;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=ptr;
	}

}
void print(struct node *ptr)
{
	while(ptr)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
}
int main()
{
//	struct node *head = NULL;
	add(1);
	add(2);
	add(3);
	add(4);
	add(5);
	print(head);
	printf("main \n");
	addMiddle(1000,2);
	print(head);
}

