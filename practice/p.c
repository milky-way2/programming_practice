//SOHAM CHAKRABORTTY CSE C 158
#include <stdio.h>
int main()
{
    int i,k,n;
    printf("Enter number of line: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        

        printf("\n");
    }
    return 0;
}