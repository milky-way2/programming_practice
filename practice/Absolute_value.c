//soham 
#include <stdio.h>
int main()
{
    float a;
    printf("Enter a number ");
    scanf("%f",&a);
    if(a<0)
    {
        a=a*(-1);
    printf("Absolute value of the given number is %f",a);
    }
    else
    {
        a=a;
        printf("Absolute value of given number is %f",a);
    }
    return 0;
}


