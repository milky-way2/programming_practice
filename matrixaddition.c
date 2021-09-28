#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter matrix element for row major ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }
    
     printf("Enter matrix element for column major ");
     for(j=0;j<3;j++)
    {
       for(i=0;i<2;i++) 
        {
           scanf("%d",&a[j][i]);
            printf("%d\t",a[j][i]);
        }
    printf("\n");
    }

    return 0;
}