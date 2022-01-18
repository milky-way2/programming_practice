#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 344;
    int *ptr;     // this is a wild pointer (wiled pointer = uninitialized pointer)
    *ptr = 34     // this is not to  good
        ptr = &a; // it is no longer wild pointer
    // means by given a right  address we can make wild pointer as normal poinrter or we can pass 'NULL' to make it right or not wild pointer

    return 0;
}
