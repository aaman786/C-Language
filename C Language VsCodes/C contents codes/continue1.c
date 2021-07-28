// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

#include<stdio.h>
int main(int argc, char const *argv[])

{  int i;
   double num,sum=0.0;
   
   for (i = 1; i <= 10; i++)
{
   printf("Enter n%d: \t",i);
   scanf("%lf",&num);

   if(num<=0.0){
      continue;
   }
   sum+=num;
}
printf("The sum is %.3lf", sum);

   return 0;
}
