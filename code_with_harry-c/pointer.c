#include <stdio.h>
int main()
{
    // int a=160;
    // int *p=&a;
    // printf("value of 'a'  %d\n",a);
    // printf("Address of 'a'  %u\n",&a);
    // printf("Address of 'a'  %p\n",&a);
    // printf("Address of 'a'  %x\n",&a);
    // printf("Derefarensing  by 'p'  %d\n",*p);                //format specifier   https://www.cplusplus.com/reference/cstdio/printf/
    // printf("value of 'p'  %u\n",p);
    // printf("value of 'p'  %p\n",p);
    // printf("value of 'p'  %x\n",p);
    // printf("Address of 'p'  %u\n",&p);
    // printf("Address of 'p'  %p\n",&p);
    // printf("Address of 'p'  %x",&p);

    // int *ptr;
    // printf("address of 'ptr'  %u\n", &ptr);
    // printf("address of 'ptr'  %p\n", &ptr);
    // printf("address of 'ptr'  %x\n", &ptr);
    // printf("value of 'ptr'  %u\n", ptr);
    // printf("value of 'ptr'  %p\n", ptr);
    // printf("value of 'ptr'  %x\n", ptr);
    int *ptr = NULL;
    printf("address of 'ptr'  %u\n", &ptr);
    printf("address of 'ptr'  %p\n", &ptr);
    printf("address of 'ptr'  %x\n", &ptr);
    printf("value of 'ptr'  %u\n", ptr);
    printf("value of 'ptr'  %p\n", ptr);
    printf("value of 'ptr'  %x\n", ptr);
    return 0;
}