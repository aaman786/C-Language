//CALL BY VALUES
#include<stdio.h>
void swap(int x, int y)
{
int temp;
temp=x;
x=y;
y=temp;
return;
}

void main()
{ 
int r=10, v=23; 
swap(r, v);  // passing value to function
printf("\nValue of r: %d",r);
printf("\nValue of v: %d",v);
}