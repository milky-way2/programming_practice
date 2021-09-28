#include<stdio.h>
int main()
{
//int convert(int days_to_convert);
int days_to_convert;
    int years,weeks,days;
    printf("Enter number of days");
    scanf("%d",&days_to_convert);
    years=days_to_convert/365;
weeks=(days_to_convert%365)/7;
days=(days_to_convert%365)%7;
printf("Years : %d\n",years);
printf("Weeks : %d\n",weeks);
printf("Days : %d",days);
return 0;
}