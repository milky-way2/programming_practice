#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
    int Y,X[Y],p,i,d[i],k;
    printf("enter y vale");
    scanf("%d",&Y);

    p=Y-1;
    for(i=0;i<p;i++)
    {
        scanf("%d",&X[i]);
        for(i=1;i<Y;i++)
        {
            if(X[i]%10==0)
        {
            d[i]=X[i];
        }
            else
            {
                d[i]=X[i]%10;
            }
            
        }
        int i=1,Y=p,k=0;
        for(i=1;i<p;i++)
        {
            k=d[i]*pow(10,(Y-1))+d[i]*pow(10,(Y-1-1));
            --Y;
        }
        if(k%10==0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }



    return 0;
}