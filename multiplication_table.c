#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter intigers : \n");
    scanf("%d",&n);
     printf("\n\nOUT PUT :\tMULTIPLICATION TABLE OF %d : \n",n);
    for(int i=1;i<=10;i++)
    {
       a=n*i;
printf("%d x %d = %d",n,i,a);
printf("\n");
    }
    return 0;
}
