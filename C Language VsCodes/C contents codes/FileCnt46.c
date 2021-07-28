#include <stdio.h>
int main()
{   
    // //********reading a file******
    // FILE *ptr=NULL;
    // char string[20];
    // ptr = fopen("main.txt", "r");
    // fscanf(ptr, "%s",string);
    // printf("The Content of the file before is: %s",string);
    
     // //********writing a file******
    // FILE *ptr=NULL;
    // char string[20]="My phone gets Broke";
    // ptr = fopen("main.txt", "w");
    // fprintf(ptr, "%s",string);

       // //********open by append mode******
    FILE *ptr=NULL;
    char string[20]="My phone gets Broke";
    ptr = fopen("main.txt", "a");
    fprintf(ptr, "%s ",string);
   
    
    return 0;
}
