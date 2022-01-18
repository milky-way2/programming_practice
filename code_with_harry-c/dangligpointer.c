#include <stdio.h>
#include <stdlib.h>
int funcdagling()
{
    int a = 34, b = 364, sum;
    sum = a + b;
    return &sum;
}
int main()
{
    // case 1 : deallocation of memory block

    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 37;
    ptr[2] = 388;
    ptr[3] = 390;
    free(ptr); // now ptr became 'Dangling' pointer

    // case 2 : Function returning local variable address

    int *dangptr = funcdagling(); // dangptr again become dagling pointer

    // case 3: if a variable goes out of scope
    int *ptr3;
    {
        int a = 34;
        ptr3 = &a;
    }
    // here variable 'a' goes out of scope //ptr3 is pointing to a location which is freed and ptr3 became 'dangling'

    return 0;
}
