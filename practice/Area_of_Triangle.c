#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,area,s;
    printf("Enter three sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is=%f",area);
return 0;    
}


