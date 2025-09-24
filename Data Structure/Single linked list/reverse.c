#include "header.h"
void rev_data(ST *ptr)
{
	int c=count(ptr);

	int i,j,size=sizeof(ST)-8;

	ST **p=(ST**)malloc(c*sizeof(ST*));

	for(i=0;i<c;i++)
	{
		p[i]=ptr;
		ptr=ptr->next;
	}
	ST temp;

	for(i=0,j=c-1;i<j;i++,j--)
	{
		memcpy(&temp,p[i],size);
		memcpy(p[i],p[j],size);
		memcpy(p[j],&temp,size);
	}
}
