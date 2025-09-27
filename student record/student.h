#define student.h

typedef struct student{
        char name[20];
        int roll_no;
        float mark;
        struct student *next;
} student;

student *add(student *head);
student *delete(student *head);
void show(student *head);
student modify(student *head);
void save(student *head);
student sort(student *head);
student *delete_all(student *head);
student *reverse(student *head);
