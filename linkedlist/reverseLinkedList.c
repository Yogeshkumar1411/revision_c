#include"header.h"
struct node *head=NULL;

int main()
{
	int option;
	while(1)
	{
		printf("*****menu******\n1.add\n2.print\n3.reverse_print\n4.reverse\n5.addMiddle\n6.greatestNumber\n\n\nEnter the chance:");
		scanf("%d",&option);
		switch(option)
		{	
			case 1:	add();
				break;
			case 2: print();
				break;
			case 3:	reversePrint();
				break;
			case 4: reverse();
				break;
			case 5: addMiddle();
				break;
			case 6: greatestNumber();
				break;
			case 10: return 0;
			default: printf("Invalid entry\n");
		}
	}
}

