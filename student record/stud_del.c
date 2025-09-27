#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

student *stud_del(student *head)
{
  if(!head)
{
printf("no record to delete \n");
return NULL;
}
char ch;
printf("R/r : enter the rollno to delete\n");
printf("N\n : enter the name to delete\n");
scanf("%c",&ch);

if(ch == 'R' || ch =='r')
{
int roll;
printf("enter the rollno : ");
scanf("%d",&roll);
student *temp = head, *prev = NULL:
while (temp)
{
if(temp ->rollno == roll)
{
if(prev) prev ->next = temp -> next;
else head = temp -> next;
free(temp); //making the head free
printf("Record deleted \n");
return head;
}
prev = temp;
temp = temp -> next;












