#include <stdio.h>

int main()
{
    int t;
    int n;
    int s=0,m;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        while(n)
        {
            m=n%10;
            n/=10;
            s=s+m;
        }
        printf("%d\n",s);
        t--;
        s=0;
    }
    return 0;
}
