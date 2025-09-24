#include "header.h"
void add_end(struct st **ptr)     
{
struct st *temp=(struct st *)malloc(sizeof(struct st));

      printf("enter the data..\n");
      scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);


      if(*ptr==0)
      {
	      temp->next=0;
	      *ptr=temp;
      }
      else
      {
	      struct st *last=*ptr;
              
	      while(last->next!=0)
		      last=last->next;

	      temp->next=last->next;
	      last->next=temp;
      }
}
