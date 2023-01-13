#include"header.h"
void add()
{
	int data;
	printf("Enter the value:");
	scanf("%d",&data);
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
/////////////////////////////////////////////////////////

void print()
{
        struct node *ptr=head;
        while(ptr!=NULL)
        {
                printf("%d ",ptr->data);
                ptr=ptr->link;
        }
        printf("\n");
}

/////////////////////////////////////////////////////////

void reversePrint()
{
        int count=0;
        struct node *ptr=head;
        while(ptr!=NULL)
        {
                count++;
                ptr=ptr->link;
        }
        printf("Count = %d\n",count);
        int count1;
        while(count)
        {
                count1=count;
                ptr=head;
                while(count1>1)
                {
                        ptr=ptr->link;
                        count1--;
                }
                printf("reverse = %d\n",ptr->data);
                count--;
        }
}

//////////////////////////////////////////////////////////////

void reverse()
{
        struct node *head1=head;
        struct node *prev=NULL;
        struct node *next=NULL;
        while(head1!=NULL)
        {
                next=head1->link;
                head1->link=prev;
                prev=head1;
                head1=next;
        }
        head1=prev;
       head=head1;
}

/////////////////////////////////////////////////////////////

void addMiddle()
{
	int position,data;
	printf("Enter the position\n");
	scanf("%d",&position);
	printf("Enter the value\n");
	scanf("%d",&data);
	struct node *temp=malloc(sizeof(struct node));
	struct node *ptr=head;
	while(position>1)
	{
		ptr=ptr->link;
		position--;
	}
	temp->data=data;
	temp->link=ptr->link;
	ptr->link=temp;
//	head=ptr;
}

////////////////////////////////////////////////////////////////

void greatestNumber()
{
	struct node *ptr=head;
	int max=ptr->data;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		if(ptr->data > max)
		{
			max=ptr->data;
		}
	}
	printf("max = %d\n",max);
}

////////////////////////////////////////////////////////////////

void smallestNumber()
{
        struct node *ptr=head;
        int min=ptr->data;
        while(ptr->link!=NULL)
        {
                ptr=ptr->link;
                if(ptr->data > min)
                {
                        min=ptr->data;
                }
        }
        printf("min = %d\n",min);
}

//////////////////////////////////////////////////////////////////

void sorting()
{

}
