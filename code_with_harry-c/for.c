#include <stdio.h>
int main()
{
    int num,i,j;
    // int i;
    printf("Enter a num : ");
    scanf("%d",&num);
//    for (i=0,j=0;(j<=2,i<=num);i++)
   for (i=0,j=0;j<=2,i<=num;i++)
//    for (i=0,j=0;i<=num,j<=2;i++)
    // for (i=100;25<(i=i/2);i)
   {
       printf("%d%d\n", i, j);
    // printf("%d\n", i);
       j++;
   }   
    
   return 0;

}