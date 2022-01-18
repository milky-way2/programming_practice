#include <stdio.h>
int main()
{
    int a = 40;
    int *ptr = &a;
    printf("The address of a is %d\n", ptr);
    printf("The value of a %d\n", *ptr);
    ptr = NULL;
    // printf("The address of a is %d\n", ptr);
    // printf("The value of a is %d\n", *ptr);
    if (ptr == NULL)
    {
        printf("Ptr is a null pointer");
    }
    return 0;
}
