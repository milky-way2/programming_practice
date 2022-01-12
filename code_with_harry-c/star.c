/*
take input from user 0 for star and 1 for reverse star.
//star pattern
*
**
***
//reverse star pattern
***
**
*

*/
#include <stdio.h>
#include <stdlib.h>
void star(int r)
{
    int i,j;
    for ( i = 1; i <= r; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
void reversStar(int r)
{
    int i,j;
    for ( i = 0; i < r; i++)
    {
        for ( j = r; j >i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    int c,n;
    while(1)
    {
        printf("\nPress 0 for star printing\nPress 1 for reverse star printing\nPress 2 for quit\nEnter your choice :  ");
        scanf("%d",&c);
        if(c!=2){
        printf("\nEnter no of rows :  ");
         scanf("%d",&n);
        }
        switch(c)
        {
            case 0:
            star(n);
            break;
            case 1:
            reversStar(n);
            break;
            case 2:
            exit(1);
            break;
            default:
            printf("!!!Wrong choice .......\n Try again\n");

        }
    }
    return 0;
}
