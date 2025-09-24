#include "header.h"
void delete_all(ST **ptr)
{
	ST *temp;

	while(*ptr!=0)
	{
		temp=*ptr;
		*ptr=temp->next;
		free(temp);
	}
}
