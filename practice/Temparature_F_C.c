//soham
#include <stdio.h>
int main()
{
    float t_c,t_f;
    printf("enter value of temperature in fahrenheit degrees\t");
    scanf("%f",&t_f);
    t_c=5*(t_f-32)/9;
    printf("\ntemperature in centigrade degrees=%f",t_c);
    return 0;
}
