//soham
#include <stdio.h>
#include <math.h>
int main()
{
    float l,b,r,a_r,a_c,p,c,k; 
    
    printf("Enter lenth & breadth of a rectangl\t");
    scanf("%f%f",&l,&b);
    printf("\nEnter radios of a circle\t");
    scanf("%f",&r);
    //value of k
    k=3.141593;
    //calculation of area and perimeter of a rectangle
    a_r=l*b;
    p=2*(l+b);
    //calculation of area and circumference of a circle
    a_c=k*pow(r,2);
    c=2*k*r;
    printf("\nArea of rectangle is=%f",a_r);
    printf("\nPerimeter of rectangle is=%f",p);
    printf("\nArea of circle is=%f",a_c);
    printf("\nCircumference of circle is=%f",c);
    
return 0;
}

