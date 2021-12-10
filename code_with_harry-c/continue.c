#include <stdio.h>
int main()
{
    int i,age;
    for ( i = 0; i < 10; i++)
    {
        printf("value of i is : %d  ",i);
        printf("\nEnter your age : ");
        scanf("%d",&age);
      

        if(age>10)
        {
            continue;
        }

        printf("\nContinue condition not satisfied .");
        printf("\nContinue condition not satisfied .");
        printf("\nContinue condition not satisfied .");
        printf("\nContinue condition not satisfied .");
        printf("\nContinue condition not satisfied .");
        printf("\nContinue condition not satisfied .");
    }
    return 0;
}