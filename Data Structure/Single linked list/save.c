#include "header.h"
void save(struct st *ptr)
{

	FILE *fp=fopen("data.txt","w");

	while(ptr!=0)
	{

		fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
