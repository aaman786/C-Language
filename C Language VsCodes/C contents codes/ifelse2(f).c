#include<stdio.h>

int main()

{   char subject,m=m,s=s;

    printf("In which subject you are passed? \t");
    printf("\n Enter m for maths, s for science, and b for both \n");
    scanf("%c", &subject, &s,&m);

   if (subject=m)
    {
    printf("You got gift of Rs10");
    }  

   else if (subject=s)
    {
        printf("You gotta gift of Rs10");
        
    }

    else {
        printf("You got gift of Rs20"); 
    }
    
    return 0;
}