//Call by Reference Value
#include <stdio.h>
//defining Function to swap the values
void Swap(int *x, int *y)
{
    int temp;   
    temp = *x;  //save the value at address
    *x = *y;    //put y into x
    *y = temp;  //put temp into y
    return;
}

int main()
{
    int a=10,b=36;
    printf("%d and %d \n",a ,b);
    Swap(&a,&b);
    printf("%d and %d \n",a ,b);
    return 0;
}
