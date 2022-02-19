#include <stdio.h>
// #include<time.h>

int main()
{
    int x;
    float y;
    // double time_use;
    // clock_t t=clock();
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
    // clock_t t1=clock();

// time_use=((double) (t1-t))/CLOCKS_PER_SEC;
// printf("\n%lf",time_use);
    return 0;
}