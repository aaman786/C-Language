// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates

#include<stdio.h>
int main(int argc, char const *argv[])

{   int i;
    double number,sum=0.0;

    for ( i =1; i <=10; i++)
    {
        printf("Enter n%d \n",i);
        scanf("%lf", &number);
    
         //if user input neg no then break the loop
    if (number<0.0)
    {
        break;
    }
    sum += number;  //sum= sum + number
    }

    printf("the sum is %.4lf",sum);

    return 0;
}
