#include <stdio.h>
int main()
{
    int a;
    printf("Enter a positive number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The given number is an even number");
    }
    else
    { 
         printf("The given number is an odd number");
        
    }
    return 0;
}