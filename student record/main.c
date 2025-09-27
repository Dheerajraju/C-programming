#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "student.h"

int main()
{
        char choice;
        student *head = NULL;
        //while(1)
        {
        printf("_____________________________________\n");
        printf("| ****** STUDENT RECORD MENU ****** |\n");
        printf("|-----------------------------------|\n");
        printf("|                                   |\n");
        printf("| a/A : add new record              |\n");
        printf("| d/D : delete a record             |\n");
        printf("| s/S :show the list                |\n");
        printf("| m/M : modify a record             |\n");
        printf("| v/V : save                        |\n");
        printf("| e/E : exit                        |\n");
        printf("| t/T : sort the list               |\n");
        printf("| l/L : delete all the records      |\n");
        printf("| r/R : reverse the list            |\n");
        printf("|                                   |\n");
        printf("| enter you choice:                 |\n");
        scanf("%d",&choice);
        printf("_____________________________________\n");
        switch(choice)
        {
            case 'a' : head = add(head);
            break;
            case 'b' : head = delete(head);
            break;
            case 's' : show(head);
            break;
            case 'm' : head = modify(head);
            break;
            case 's' : save(head);
            break;
            case 'e' : exit;
            break;
            case 't' : head = sort(head);
            break;
            case 'l' : head = delete_all(head);
            break;
            case 'r' : head = reverse(head);
            break;
            default : printf("invalid choice \n");
        }
        }
}
