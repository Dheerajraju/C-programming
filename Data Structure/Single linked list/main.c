#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st
{
	int roll;
	char name[20];
	float marks;
	struct st *next;
}ST;
void add_end(struct st**);
void print(struct st *);
void rev_print(struct st*);
void rev_data(ST*);
int count(ST *);
void rev_link(ST**);
int main()
{
	struct st *hptr=0;
	char ch;
	do
	{
		add_end(&hptr);
		printf("do you want to add one more node\n");
		scanf(" %c",&ch);
	}while(ch=='y');

	print(hptr);
	//printf("printing the data in reverse..\n");
	//rev_print(hptr);
	//rev_data(hptr);
	//printf("after reversing the data..\n");
	//print(hptr);
	rev_link(&hptr);
	printf("after reverse the link..\n");
	print(hptr);

}
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
void print(struct st *ptr)
{
        printf("printing the data...\n");

	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}

}
void rev_print(struct st *ptr)
{

	if(ptr!=0)
	{
		rev_print(ptr->next);
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
	}
}
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
int count(struct st *ptr)
{
int c=0;
	while(ptr!=0)
	{
		++c;
		ptr=ptr->next;
	}
	return c;
}
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
