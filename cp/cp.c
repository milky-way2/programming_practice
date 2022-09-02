#include <stdio.h>

int main()
{
    int T,x,y;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d%d",&x,&y);
        x=x*107/100;
        if(y<=x)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
