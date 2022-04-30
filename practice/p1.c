//SOHAM CHAKRABORTTY CSE C 158
#include <stdio.h>
int main()
{
    int i,j,k,n,p;
    printf("enter number of line");
    scanf("%d",&n);
    p=n-1;
    for(i=1;i<=n;i++)
    {
       for(j=p;j>=i;j--)
     {
          printf(" ");
     }
        for(k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        

        printf("\n");
    }
    return 0;
}