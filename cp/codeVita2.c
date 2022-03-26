#include <stdio.h>

int main()
{
    int  a1,b1,d1,e1,a2,b2,d2,e2;
    double c1;
    double c2;
    scanf("%d",&a1);
    scanf("%d",&b1);
    scanf("%lf",&c1);
    scanf("%d",&d1);
    scanf("%d",&e1);
    scanf("%d",&a2);
    scanf("%d",&b2);
    scanf("%lf",&c2);
    scanf("%d",&d2);
    scanf("%d",&e2);
    double s1=0;
    double s2=0;
    double p;
    double d;
    double p1=d1/a1;
    double p2=d2/a2;
    p=(c1+(p1*b1)+e1);
    d=(c2+(p2*b2)+e2);
    if(p<d)
    {
        printf("petrol");
    }
    else
    {
        printf("diesel");
    }
    return 0;
}
