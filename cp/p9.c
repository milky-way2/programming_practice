#include <stdio.h>

int main()
{
    int t,n,r=0,m;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        while(n)
        {
            m=n%10;
            r=r*10+m;
            n/=10;
        }
        printf("%d\n",r);
        m=0;
        r=0;
        t--;
    }
    return 0;
}
