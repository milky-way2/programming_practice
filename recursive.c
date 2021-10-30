//Recursive Function. Factorial identify usinig Recursion.
// @Author   Soham Chakrabortty 
#include <stdio.h>
int factorial(int);
int  main()
{
    int n,f;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
f=factorial(n);
printf("\nThe factorial of %d is : %d",n,f);
return 0;
}
int factorial(int num)
{
    if(num>1)
    return num*factorial(num-1);
    else
    { 
    if(num==1 || num==0)
    return 1;
    }
}