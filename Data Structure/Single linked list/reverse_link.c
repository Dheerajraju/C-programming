#include "header.h"
void rev_link(ST **ptr)
{
	int i,c=count(*ptr);

	ST *temp=*ptr;

	ST  **p=(ST**)malloc(c*sizeof(ST*));

	for(i=0;i<c;i++)
	{
		p[i]=temp;
		temp=temp->next;
	}
	
	p[0]->next=0;

	for(i=1;i<c;i++)
		p[i]->next=p[i-1];

	*ptr=p[c-1];
}
