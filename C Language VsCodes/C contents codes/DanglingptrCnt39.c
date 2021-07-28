// // De allocation of memory block
// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char const *argv[])
// {
//     int *ptr = (int *)malloc(5 * sizeof(int));
//     ptr[0] = 41;
//     ptr[1] = 76;
//     ptr[2] = 31;
//     ptr[3] = 11;

//     free(ptr); // ptr is now become dangling pointer
//     return 0;
// }

// //  Dialing of pointer by returning local Variables by callas
// #include <stdio.h>
// #include <stdlib.h>
// int myfunc(int sum)
// {
//     int a = 2, b = 6;
//     sum = a + b;
//     printf("The sum is: %d", sum);
//     return sum;

// }
// int main(int argc, char const *argv[])
// {
//     int *ptr = myfunc(ptr); //as the the func returns the value, ptr becomes Dangling pointer
//     return 0;
// }

// Case 3: If a variable goes out of scope
    {
        int a = 12;

        danglingPtr3 = &a;
    }
    // Here variable a goes out of scope which means danglingPtr3 is 
    // pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer