#include <stdio.h>
int main()
{
    int num,i,j;
    printf("Enter a num : ");
    scanf("%d",&num);
   for (i=0,j=0;j<=2,i<=num;i++)
//    for (i=0,j=0;i<=num,j<=2;i++)
   {
       printf("%d%d\n", i, j);
       j++;
   }   
    
   return 0;

}