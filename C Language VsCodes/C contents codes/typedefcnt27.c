/*with Typedef we can give our own name to any data type, 
and also acess the through the defined name by c and our newly given name*/  
#include <stdio.h>
int main()
{
    typedef unsigned long ul;
    ul a = 3, b = 7; //here I had given a nickename to unsugned long as lu
    printf("a=%d \n", a);
    printf("b=%d \n", b);
}
