#define student.h

typedef struct student{
        char name[20];
        int rollno;
        float mark;
        struct student *next;
} student;

student *stud_add(student *head);
student *stud_del(student *head);
void stud_show(student *head);
student stid_mod(student *head);
void stud_save(student *head);
student stud_sort(student *head);
student *stud_delAll(student *head);
student *stud_reverse(student *head);
