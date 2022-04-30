//soham chakrabortty
#include <stdio.h>

int main()
{
int a,b,c;
printf("Enter three number");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
    if(b>c)
    printf("greatest number is %d",a);
    else
    {
        if(a<c)
        printf("greatest number is %d",c);
        else
        printf("greatest number is %d",a);
    }
}
    else
    {
        if(b>c)
        printf("greatest number is %d",b);
        else
        printf("greatest number is %d",c);
    }
    return 0;
}


