#include <stdio.h>
int main()
{
    int a;
    printf("Enter a element\t");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Given number is an even number");
    }
    else{
           printf("Given number is an odd number");
    }
    return 0;
}