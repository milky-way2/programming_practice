#include <stdio.h>

int main()
{
    int x;
    float y;
    scanf("%d%f",&x,&y);
    if(x%5==0)
    {
        float s=(y-(float)x-0.5);
        if(s<0)
        {
        printf("%.2f",y);
            
        }
        else
        {
             printf("%.2f",s);
        }
    }
    else
    {
        printf("%.2f",y);
    }

    return 0;
}