#include <stdio.h>

int main()
{
float bs,da,hra,gspm;
printf("Enter Basic salary of employer\t");
scanf("%f",&bs);

da=0.4*bs; 
hra=0.2*bs;
gspm=da+hra+bs;
printf("Basic Sakary Of Employer=%.2f",bs);
    printf("\nEmployer Dearness Allowance= %.2f",da);
    printf("\nEmployer House Rent Allowance=%.2f",hra);
    printf("\nEmployer Gross Salary Per Month =%.2f",gspm);

    return 0;
}