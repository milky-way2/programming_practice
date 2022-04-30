//SOHAM CHAKRABORTTY CSE C 158
#include <stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
       for(j=4;j>=i;j--)
     {
          printf(" ");
     }
    k=i+j;
   {
        for(l=1;l<=k;l++)
        {
            printf("*");
        }
   }

        printf("\n");
    }
    return 0;
}