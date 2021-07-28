#include <stdio.h>
#include <string.h>
union student
{
    int std_Id;
    float std_marks;
    char std_starting_letter;
    char std_name[15];
} ;
int main()
{
    union student s1;
    s1.std_Id=74;
    s1.std_marks=89;
    s1.std_starting_letter='J';
    strcpy(s1.std_name,"James"); 
    //here the thing in last will display properly while other gets corrupt.

    printf("Name of student: %s\n",s1.std_name);
    printf("Id of student: %d\n",s1.std_Id);
    printf("Marks of student: %.2f\n",s1.std_marks);
    printf("Starting letter of student: %c\n",s1.std_starting_letter);
    
    return 0;
}