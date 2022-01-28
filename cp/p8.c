#include <stdio.h>

int main()
{
    int t;
    int n;
    int s=0,m,i=1;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        while(n)
        {
            m=n%10;
            n/=10;
            while(i)
            {
                s=m;
                i--;
            }
        }
        printf("%d\n",s+m);
        t--;
        s=0;
        i=1;
    }
    return 0;
}