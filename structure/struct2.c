#include<stdio.h>
struct class
{
	char name[50];
};

struct cdev
{
	char object[50];
	int option;

};

struct device
{
	int size;
	int address;
	char name[20];
	struct cdev cdev;
	struct class *pcd;

};

struct driver
{
	int dev_number;
	int no_of_devices;
	struct device dev[2];

};

int main()
{
	
}
