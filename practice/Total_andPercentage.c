/*soham*/
#include <stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,a;
    float p;
    printf("enter your marks in five subjects\t");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    a=m1+m2+m3+m4+m5;
    p=a/5;
    printf("\nAggregate marks=%f",a);
    printf("\nPercentage of marks=%f",p);
    return 0;
}
