//Recursive Function.    Recursion
#include <stdio.h>
int factorial(int);
void main()
{
    int n,f;
    printf("Enter a positive integer");
    scanf("%d",&n);
f=factorial(n);
printf("\nThe factorial of %d is : %d",n,f);

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