#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

int genrollno(student *head)
{
  int roll=1;
  student *temp = head;
while(temp)
{
if(temp ->rollno >= roll)roll = temp -> rollno +1;
temp = temp ->next;
}
return roll;
}

student *add
