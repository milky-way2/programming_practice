#include <stdio.h>
int main()
{
    int d1,d2,d3,d4,d5,n,rn;
    printf("enter any five digit number");
    scanf("%d",&n);
    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    rn=d5*10000+d4*1000+d3*100+d2*10+d1;
    printf("%d",rn);
    return 0;
    
}

