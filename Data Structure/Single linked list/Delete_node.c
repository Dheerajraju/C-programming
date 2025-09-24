#include "header.h"
void delete_node(ST **ptr,int n)
{
	ST *prev;
	ST *temp=*ptr;

	while(temp!=0)
	{
		if(temp->roll==n)
		{
			if(temp==*ptr)
				*ptr=temp->next;
			else
				prev->next=temp->next;

			free(temp);
			return;
         	}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}
}


