#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
void greetHello(int (*ptr)(int, int))
{
    printf("Hello\n");
    printf("The sum is %d\n", ptr(9, 7));
}
void greetGM(int (*ptr)(int, int))
{
    printf("Good Morning \n");
    printf("The sum is %d\n", ptr(9, 7));
}
int main()
{
    int (*fptr)(int, int);
    fptr = &sum; // we can also write  fptr=sum
    // greetGM(fptr);
    // greetHello(fptr);

    return 0;
}
