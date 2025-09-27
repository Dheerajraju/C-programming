#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

int genrollno(student *head)
{
  int roll=1;
  student *temp = head;
while(temp)
if(temp ->rollno >= roll)roll = temp -> rollno +1;
temp = temp ->next;
}
return roll;
}

student *stud_add(student *head)
{
  student *newnode = (student*)malloc(sizeof(student)):
if(!newnode) 
{
printf("Memory allocation failed!\n");
return head;
}
newnode -> rollno = genroll(head);
printf("Enter the name:");
scanf("%c",newnode -> name);
printf("Enter the percentage: ");
scanf("%f",&newnode -> percentage);
newnode ->next = null;

if(head == NULL)
{
head = newnode;
}
else
{
student *temp = head;
while(temp -> next) temp = temp ->next;
temp -> next = newnode;
}
printf("Record added Rollno: %d\n", newnode ->rollno);
return head;
}
