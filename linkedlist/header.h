#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
extern struct node *head;
void add();
void print();
void reversePrint();
void reverse();
void addMiddle();
void greatestNumber();
