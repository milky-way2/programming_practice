/*soham*/ 

#include <stdio.h>

int main()
{
int p,t;
float r,si,np; 
printf("enter principle amount\t");
scanf("%d",&p);
printf("enter number of year\t");
scanf("%d",&t);
printf("rate of interest\t");
scanf("%f",&r);
//formula of simple interest
si=p*r*t/100;
np=si+p;
printf("your simple interest is=\t%f",si);
printf("\nyou need to pay=\t%f",np);

    return 0;
}

