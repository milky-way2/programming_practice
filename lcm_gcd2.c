#include<stdio.h>
#include<windows.h>
int main()
{
    int a,b,gcd,lcm;
    int i;
    system("cls");
    printf("Enter two integers ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    printf("GCD of %d and %d = %d\nLCM of %d and %d = %d",a,b,gcd,a,b,lcm);
    return 0;
}