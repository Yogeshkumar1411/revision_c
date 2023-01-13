#include<stdio.h>
#include<stdlib.h>
#include "struct.h"
#include "structdata.h"
struct device *get_data(struct device *data)
{
	struct device *get;
	get = (struct device*)malloc(sizeof(*get));
	get->name = data->name;
	get->serial_number = data->serial_number;
	get->permission = data->permission;
	return get;
}

int main()
{
	struct device *d;
	d = get_data(&data);
	printf("%s\n%s\n%d\n",d->name,d->serial_number,d->permission);
}
