#include <stdio.h>
typedef struct student
{
    char student_name[10];
    int student_id;
    float student_marks;
} std, s1, s2; //here i replace the define name of stucture with another
int main()
{
    printf("Displaying Student 1 details as s1\n");
    std s1 = {"James", 47, 76.4};
    printf("Name= %s\n", s1.student_name);
    printf("Id= %d\n", s1.student_id);
    printf("marks= %.2f\n\n", s1.student_marks);

    printf("Displaying The student 2 details as s2\n");
    std s2 = {"charlie", 78, 89.68};
    printf("Name= %s\n", s2.student_name);
    printf("Id= %d\n", s2.student_id);
    printf("marks= %.2f\n", s2.student_marks);
    return 0;
}