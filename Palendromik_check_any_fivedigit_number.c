//soham 
#include <stdio.h>
#include <math.h>
int main()
{
    int ip,dip,d1,d2,d3,d4,d5,rn;
    printf("Enter a five digit number ");
    scanf("%d",&ip);
    dip=ip;
    d5=ip%10;
    ip=ip/10; //remaning ip
    d4=ip%10;
    ip=ip/10; //remaning ip
    d3=ip%10;
    ip=ip/10; //remaning ip
    d2=ip%10;
    ip=ip/10; //remaning ip
    d1=ip%10;
    ip=ip/10; //remaning ip
    rn=d5*10000+d4*1000+d3*100+d2*10+d1;
   if(rn==dip)
    {
   printf("Original and reversed numbers are equal.");
    }
    else 
    {
    printf("Original and reversed numbers are not equal.");
    }
    return 0;
}



