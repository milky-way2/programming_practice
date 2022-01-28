#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("The sum is %d\n", sum(2, 5));
    //creating function pointer
    int (*ptr)(int, int);//declaring 
    ptr = &sum;//initializing
    int d = (*ptr)(10, 15);//derefferencing
    printf("The value of d is %d\n", d);
    return 0;
}
