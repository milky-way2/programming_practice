//soham
#include "stdio.h"
int main()
{
    float km,m,ft,inch,cm;
    printf("enter the distance in kilometers\t");
    scanf("%f",&km);
    m=km*1000;
     cm=m*100;
     inch=cm/2.54;
     ft=inch/12;
     printf("\ndistance in kilometers=\t%f",km);
     printf("\ndistance in meter=\t%f",m);
     printf("\ndistance in centimeters=\t%f",cm);
     printf("\ndistance in inches=\t%f",inch);
     printf("\ndistance in feet=\t%f",ft);
     return 0;
}

