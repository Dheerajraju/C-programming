#include "header.h"
void add_begin(struct st **ptr)
{

	struct st *temp=(struct st*)malloc(sizeof(struct st));

	printf("enter roll,name and marks\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);

	temp->next=*ptr;
	*ptr=temp;

}

