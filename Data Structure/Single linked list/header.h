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
void delete_all(ST**);
void delete_node(ST **,int);
