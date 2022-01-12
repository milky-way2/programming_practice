#include <stdio.h>
int func()
{
    static int b=10;
    // static int b=ret();// it is a wrong format 
    // static int b;           //here b=0;
    b++;
    return b;
}
int ret()
{
    return 5;
}
int main()
{
    int a;
    a=func();
    printf("%d\n",a);
    a=func();
    printf("%d\n",a);
    a=func();
    printf("%d\n",a);
    return 0;
}
