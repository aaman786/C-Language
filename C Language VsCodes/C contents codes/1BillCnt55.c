#include <stdio.h>
 char funcreturn(const char *str, const char *oldword, const char *newword)
 {  int count=0;
     for (int i = 0; str = '\0'; i++)
     {
        if (strstr(&str[i],oldword)==&str[i])
        {
          count++;  
        }
        
     }
     
 }
int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    ptr = fopen("Cnt55Bill.txt", "r");
    char string[200];
    fgets(string, 200, ptr);
    printf("The txt file was; %s", string);
    fclose(ptr);

    return 0;
}
