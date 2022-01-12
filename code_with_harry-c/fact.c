#include <stdio.h>
int fact(int n);
int main()
{
    int a;
    printf("Enter a no :  ");
    scanf("%d",&a);
    int ans;
    ans=fact(a);
    printf("The factorial of %d is : %d ",a,ans);
    return 0;
}
int fact(int n)
{
    int f;
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        f=n*fact(n-1);
        return f;
    }
}
