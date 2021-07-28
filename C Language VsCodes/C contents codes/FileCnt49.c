#include <stdio.h>

int main(int argc, char const *argv[])
{   
   // // fgetc() function for File operations
    // FILE *ptr = NULL;
    // ptr = fopen("cnt46.txt", "r");
    // char c = getc(ptr);
    // printf("The character I read was: %c\n", c);
    // c = getc(ptr);
    // printf("The 2nd character I read was: %c\n", c);


    // // fgets() Function For String Reading in file
    // FILE *ptr = NULL;
    // ptr = fopen("cnt46.txt", "r");
    // char str[10];
    // fgets(str,7,ptr);  //here 7 is no of character want to read
    // printf("The string is: %s\n", str);


    //  // fgets() and fgetc() Function For String Reading in file
    // FILE *ptr = NULL;
    // ptr = fopen("cnt46.txt", "w"); //changing This r with w because I am writing.
    // // but first file got Erase because we are opening as w
    
    // fputc('O',ptr);  
    // fputs("this is me",ptr);


    // fgets() and fgetc() Function For String Reading in file in mode r+
    FILE *ptr = NULL;
    ptr = fopen("cnt46.txt", "r+"); //changing This r with r+.
    // becoz I it will preserve the information in that file which store before
    
    fputc('O',ptr);  
    fputs("this is me",ptr);

    fclose(ptr);
    return 0;
}
