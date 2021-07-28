#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Programming";
    char s2[10];
    strcpy(s2,s1); //s2 is written first bcoz we want to copy s1(it is written next) in s2. 
    printf("After Copy, s2 is like: %s",s2);
    // here it get copied in s2
}